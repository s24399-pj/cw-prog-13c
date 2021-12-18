#include <iostream>

int sil_rek(int n){
    long double silnia = 1.0;
    for(int i = 1; i <= n; ++i) {
            silnia *= i;
        }
    return silnia;
}


int main(){
    int liczba,silnia;
    std::cout<<"Podaj liczbe: \n";
    std::cin>>liczba;

    silnia=sil_rek(liczba);
    std::cout<<silnia;

    return 0;
}




