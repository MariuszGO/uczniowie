#include <iostream>
#include "class_uczniowie.h"
using namespace std;


int main()
{
    
    //uczniowie* dane = new uczniowie();
    uczniowie* u1;
    u1 = new uczniowie("Jan","Kowalski",29,"98111122222","2AT",5);
        
   //dane->wprowadz();
   //dane->wyswietl();

   
   
    u1->wyswietl();
    //dane->wyswietl();


    delete u1; //podczas usuwania obiektu u1 automatycznie został uruchomiony
}              //destruktor 

