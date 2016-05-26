#include "Okno.h"
#include <fstream>
#include <list>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;




void main() {
	ifstream plik;
	double pom = 0;
	plik.open("dane.txt");
	dane.push_back(0);
	while (!plik.eof()) {
		plik >> pom;
		dane.push_back(pom);
	}
	Obliczenie obliczenie;
	obliczenie.fautokorelacja();
	obliczenie.fbladstandardowy();

	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Akcje::Okno okno;
	Application::Run(%okno);
	
}