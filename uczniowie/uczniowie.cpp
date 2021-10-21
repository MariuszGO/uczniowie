#include <iostream>
#include "class_uczniowie.h"
using namespace std;


int main()
{
    
    uczniowie *dane, *uczen = new uczniowie();


    uczniowie* u1;
    u1 = new uczniowie();

    
    //dane->wprowadz();
   // dane->wyswietl();

    uczen->imie = "Adam";
    uczen->nazwisko = "Nowak";
    uczen->wyswietl();
    u1->wprowadz();
    u1->wyswietl();


}

