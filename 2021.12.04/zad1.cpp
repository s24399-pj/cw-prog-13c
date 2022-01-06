#include <iostream>

void iloczyn3(){
    int a3;
    std::cout << "Podaj Liczbe a: ";
    std::cin >> a3;
    int b3;
    std::cout << "Podaj Liczbe b: ";
    std::cin >> b3;
    std::cout << "Wynik mnozenia " << a3 << " * " << b3 << " = " << a3 * b3 << std::endl;
}

void iloczyn2(int a2, int b2){
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a2;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> b2;
    std::cout << "Wynik :" << a2 << "*" << b2 << "=" << a2 * b2 << std::endl;
}

int iloczyn1(int a1, int b1){
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a1;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> b1;
    std::cout << "Wynik :" << a1 << "*" << b1 << "=" << a1 * b1 << std::endl;
    return 0;
}

int iloczyn(){
    int a;
    std::cout << "Podaj Liczbe a: ";
    std::cin >> a;
    int b;
    std::cout << "Podaj Liczbe b: ";
    std::cin >> b;
    std::cout << "Wynik mnozenia " << a << " * " << b << " = " << a * b << std::endl;
    return 0;
}

int main(){
    iloczyn();
    int a1, b1;
    int wynik = iloczyn1(a1,b1);
    int a2,b2;
    iloczyn2(a2,b2);
    iloczyn3();

    return 0;
}
