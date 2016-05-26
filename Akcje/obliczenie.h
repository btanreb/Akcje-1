#pragma once
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<double>dane;
vector<double>autokorelacja;
vector<double>bladstandardowy;
int rozmiar = 0;
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
};


