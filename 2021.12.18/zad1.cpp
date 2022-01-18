#include <iostream>
#include <string>
#include <string.h>

auto main() -> int{
    std::string imie_nazwisko="Satoshi Nakamoto";
    std::string* pointer_in=&imie_nazwisko;

    std::cout<<"Wartosc zmiennej  \n";
    std::cout<<*pointer_in<<"\n";
    std::cout<<"Adres zmiennej  \n";
    std::cout<<pointer_in<<"\n";
    std::cout<<"Rozmiar zmiennej  \n";
    std::cout<<sizeof(*pointer_in)<<"\n";

    std::cout<<"Wartosc wskaznika  \n";
    std::cout<<pointer_in<<"\n";
    std::cout<<"Adres wskaznika  \n";
    std::cout<<&pointer_in<<"\n";
    std::cout<<"Rozmiar wskaznika  \n";
    std::cout<<sizeof(pointer_in)<<"\n";

    return 0;
}