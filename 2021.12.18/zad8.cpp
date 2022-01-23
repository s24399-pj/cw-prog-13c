#include <iostream>

using namespace std;

struct ulamek{
    int licznik,mianownik;
    float wartosc;
};

float ulamekmnozenie(ulamek a,ulamek b){

    float ulamekc = a.wartosc*b.wartosc;

    return ulamekc;

}
int main()
{
    ulamek ulamek1;
    ulamek1.licznik = 7;
    ulamek1.mianownik = 8;
    ulamek1.wartosc = ((float)ulamek1.licznik/ulamek1.mianownik);

    ulamek ulamek2;
    ulamek2.licznik = 9;
    ulamek2.mianownik = 4;
    ulamek2.wartosc = ((float)ulamek2.licznik/ulamek2.mianownik);

    cout << "Wynik mnozenia ulamkow " << ulamek1.wartosc << " razy " << ulamek2.wartosc << " to: " << endl;
    cout << ulamekmnozenie(ulamek1,ulamek2) << endl;
    return 0;
}
