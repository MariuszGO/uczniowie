#include <iostream>

using namespace std;

class uczniowie {
public:
	string imie;
	string nazwisko;
	int wiek;
	string pesel;
	string klasa;
	int ocena;

	//void uczniowie :: wyswietl(void ); //prototyp metody wyswietl

	void wprowadz( void ) {
		cout << "Podaj imiê:";
		cin >> this->imie;
		cout << "Podaj nazwisko:";
		cin >> this->nazwisko;
		cout << "Podaj wiek:";
		cin >> this->wiek;
		cout << "Podaj PESEL:";
		cin >> this->pesel;
		cout << "Podaj klasê:";
		cin >> this->klasa;
		cout << "Podaj oecnê:";
		cin >> this->ocena;
	}


}; //koniec klasy


void uczniowie :: wyswietl( void ) {
	cout << "************************" << endl;
	cout << "* Imiê:  " << this->imie <<" *" << endl;
	cout << "* Nazwisko:  " << this->nazwisko << " *" << endl;
	cout << "* Wiek:  " << this->wiek << " *" << endl;
	cout << "* PESEL:  " << this->pesel << " *" << endl;
	cout << "* Klasa:  " << this->klasa << " *" << endl;
	cout << "* Ocena:  " << this->ocena << " *" << endl;
	cout << "************************" << endl;
}




