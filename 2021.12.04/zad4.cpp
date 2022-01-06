#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void cone(float r, float h,float &pole, float &objetosc){
    pole=(M_PI)*r*r;
    objetosc=((M_PI)*r*r*h)/3;
}

int main(){
    float r,h,pole,objetosc;
    std::cout << "Podaj promien stozka: ";
    std::cin >> r;
    std::cout << "Podaj wysokosc stozka: ";
    std::cin >> h;
    cone(r,h,pole,objetosc);
    if(r>0 && h>0){
        cout <<"Pole stozka wynosi: "<<pole<<"\n";
        cout <<"Objetosc stozka wynosi: "<<objetosc<<"\n";
    }
    else{
        cout<<"Taki stozek nie istnieje \n";
    }

    return 0;
}
