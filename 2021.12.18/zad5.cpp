#include <iostream>

using namespace std;

void dane(int *wsk_n, int *wsk_tab){
    for(int i=0;i<*wsk_n;i++){
        *(wsk_tab+i) = rand()%100;
    }
}

void wyswietl(int *wsk_n, int *wsk_tab){
    for(int j=0;j<*wsk_n;j++){
        cout << *(wsk_tab+j) << " ";
    }
    cout<<"\n";
}

int skalarny(int *wsk_n, int *wsk_X, int *wsk_Y){
    int wynik =0;
    for(int i=0;i<*wsk_n;i++){
        wynik += *(wsk_X+i) * *(wsk_Y+i);
    }
    return wynik;
}

int main(){
    int n;
    cout << "Podaj rozmiar wektorow\n";
    cin >> n;
    int X[10];
    int Y[10];
    int *wsk_n=&n;
    int *wsk_X=X;
    int *wsk_Y=Y;

    dane(&n,X);
    dane(&n,Y);
    wyswietl(&n,X);
    wyswietl(&n,Y);

    cout << "Iloczyn skalarny wektorow wynosi: " << skalarny(&n,X,Y);
    return 0;
}