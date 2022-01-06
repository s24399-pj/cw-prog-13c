#include <iostream>

int sil_rek(int n){
    if(n > 1)
        return n * sil_rek(n - 1);
    else
        return 1;
}


int main(){
    int liczba,silnia;
    std::cout<<"Podaj liczbe: \n";
    std::cin>>liczba;
    std::cout<<"Silnia z "<<liczba<<" wynosi: "<<sil_rek(liczba);

    return 0;
}




