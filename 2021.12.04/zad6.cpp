#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void full(int n, int tab[]){
     for (int i=0; i<n; i++){
            tab[i]=(std::rand()%10+0);
        }
}
void show(int &n, int tab[]){
    for (int i=0; i<n; i++){
        std::cout << tab[i];
    }
    std::cout << std::endl;
}

int skalarny(int n, int X[], int Y[]){
    int product;
    product=0;
    for (int i=0; i<n; i++){
        product+=X[i]*Y[i];
    }
    return product;
}

int main()
{
    srand((unsigned)time(0));
    int q,p;
    int A[15];
    int B[15];
    std::cout << "Podaj wymiar tablicy A, maksymalnie o rozmiarze 15" << std::endl;
    std::cin >> q;
    std::cout << "Podaj wymiar tablicy B, maksymalnie o rozmiarze 15" << std::endl;
    std::cin >> p;
    full(q,A);
    full(p,B);
    std::cout << "Oto twoja tablica A:" << std::endl;
    show(q,A);
    std::cout << "Oto twoja tablica B:" << std::endl;
    show(q,B);
    std::cout << "Iloczyn skalarny wynosi: ";
    std::cout << skalarny(q,A,B);

    return 0;
}