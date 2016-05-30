#pragma once
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<double>dane;
vector<double>autokorelacja;
vector<double>bladstandardowy;
int rozmiar = 0;

double beta[2], e = 0, v = 0, stats = 0;

class Obliczenie
{
public:
		double srednia() {
		double pom;
		int i = 0;
		for (vector<double>::iterator it = dane.begin(); it != dane.end(); it++) {
			pom += *it;
			i++;
		}
		double wynik = pom / i;
		rozmiar = i;
		return wynik;
	}
	void fautokorelacja(){
		double gora = 0;
		double sredniaob = srednia();
		double wynikg = 0,wynikd = 0;
		
		for (int i = 1; i < rozmiar; i++) {
			wynikd += pow((dane[i] - sredniaob), 2);
		}

		int k,t;
		for (k = 1; k < rozmiar; k++) {
			gora = 0;
			for (t = 1; t < rozmiar - k; t++) {
				wynikg = (dane[t] - sredniaob)*(dane[t + k] - sredniaob);
				gora += wynikg;
			}
			wynikg = gora / wynikd;
			autokorelacja.push_back(wynikg);
		}
	}

	double pomwyniksrk(double pomdladstandardowy) {
		double pomwyniksrk1;
		double pomwyniksrk2;
		pomwyniksrk1 = 0.1;
		pomwyniksrk2 = (1 + 2 * pomdladstandardowy);
		return pomwyniksrk1*pomwyniksrk2;
	}
	
	void fbladstandardowy() {
		double pomdladstandardowy;
		double wyniksrk;
		
		for (int i = 1; i < rozmiar; i++) {
			pomdladstandardowy = 0;
			for (int j = 1; j < i; j++)
				pomdladstandardowy += pow(autokorelacja[j], 2);
			wyniksrk = sqrt(pomwyniksrk(pomdladstandardowy));
			
			bladstandardowy.push_back(wyniksrk);
		}
		

	}

	double calculateBeta(int index)
	{
		if (index == 1)
		{
			double up = 0, down = 0, mid = this->srednia();

			for (int k=1; k < rozmiar; k++)
			{
				for (int i = 1; i < rozmiar - k; i++)
					up = (dane[i] - mid)*(dane[i + k] - mid);
			}
			for (int i = 1; i < rozmiar; i++)
				down += pow((dane[i] - mid), 2);
			beta[1] = up / down;
			return beta[1];
		}
		if (index == 0)
		{
			double mid = this->srednia();
			beta[0] = mid - (this->calculateBeta(1) * mid);
			return beta[0];
		}
	}
	double srednieOdchylenieOdProstejRegresji()
	{
		double y = 0, mid = this->srednia(), temp = 0;
		for (int i = 1; i < rozmiar; i++)
		{
			y = this->calculateBeta(0) + (this->calculateBeta(1) * dane[i]);
			temp += y - mid;
		}
		e = temp;
		return e;
	}
	double wspolczynnikZmiennosciLosowej()
	{
		v = this->srednieOdchylenieOdProstejRegresji() / this->srednia();
		return v;
	}
	double wspolczynnikDeterminacji()
	{
		//R^2 nalezy <0;1>
		//niedokonczone
		double up = 0, down = 0, mid = srednia();

		for (int i = 1; i < rozmiar; i++)
			down += pow(dane[i] - mid, 2);
		return 0;
	}
	double statystykaDurbinaWatsona()
	{
		/*
		statystyka ma wartosci <0;4>
		wartosci w okolicy 0 - bardzo silna, DODATNIA autokorelacja
		wartosc 2 - BRAK autokorelacji
		wartosci w okolicy 4 - bardzo silna, UJEMNA autokorelacja
		*/
		double y = 0, mid = this->srednia(), temp[12];
		for (int i = 1; i < rozmiar; i++)
		{
			y = this->calculateBeta(0) + (this->calculateBeta(1) * dane[i]);
			temp[i] = y - mid;
		}
		
		double up = 0, down = 0;
		for (int i = 2; i < rozmiar; i++)
			up += pow(temp[i] - temp[i - 1], 2);
		for (int i = 1; i < rozmiar; i++)
			down += pow(temp[i], 2);

		stats = up / down;
		return stats;
	}
};


