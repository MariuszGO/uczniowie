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
	int* tab;
	
	void wyswietl(void);

	uczniowie(string imie, string naz, int w, string pesel, string klasa, int ocena) {
		cout << "dzia�a konstruktor 1"<<endl;
		this->imie = imie;
		this->nazwisko = naz;
		this->wiek = w;
		this->pesel = pesel;
		this->klasa = klasa;
		this->ocena = ocena;
		this->tab = new int[100];
	}

	~uczniowie() {
		delete[] tab;
		cout << "Dzia�a destruktor" << endl;
	}

	uczniowie() {
		cout << "dzia�a konstruktor2 " << endl;
		this->imie = "brak";
		this->nazwisko = "brak";
		this->wiek = 0;
		this->pesel = "brak";
		this->klasa = "brak";
		this->ocena = 0;
	}




	void wprowadz( void ) {
		cout << "Podaj imi�:";
		cin >> this->imie;
		cout << "Podaj nazwisko:";
		cin >> this->nazwisko;
		cout << "Podaj wiek:";
		cin >> this->wiek;
		cout << "Podaj PESEL:";
		cin >> this->pesel;
		cout << "Podaj klas�:";
		cin >> this->klasa;
		cout << "Podaj oecn�:";
		cin >> this->ocena;
	}


}; //koniec klasy


void uczniowie :: wyswietl( void ) {
	cout << "************************" << endl;
	cout << "* Imi�:  " << this->imie <<" *" << endl;
	cout << "* Nazwisko:  " << this->nazwisko << " *" << endl;
	cout << "* Wiek:  " << this->wiek << " *" << endl;
	cout << "* PESEL:  " << this->pesel << " *" << endl;
	cout << "* Klasa:  " << this->klasa << " *" << endl;
	cout << "* Ocena:  " << this->ocena << " *" << endl;
	cout << "************************" << endl;
}




