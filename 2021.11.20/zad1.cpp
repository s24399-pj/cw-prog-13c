#include <iostream>
#include <vector>


int main(){
    std::vector<int> A {0,0,0,0,0,0,0,0,0,0};
    int ilosc_zmiennych,zmienna;

    std::cout<<"Podaj ilosc zmiennych \n";
    std::cin>>ilosc_zmiennych;
    std::cout<<"Podaj zmienna \n";
    std::cin>>zmienna;
    

    for(int i=0;i<ilosc_zmiennych;i++){
        A.push_back(zmienna);
    }

    // odp: w obydwu przypadkach poprostu dopisze do "vectora" okreslona ilosc okreslonych liczb, to nie array wiec zwiekszy swoja dlugosc

    // cos w stylu: {0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3}
    // Moznaby tez umozliwic programowi nadpisywanie tych pierwszych 10 cyfr ale co kto woli

    std::cout<<"\n";
    for(int i=0;i<A.size();i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    return 0;
}