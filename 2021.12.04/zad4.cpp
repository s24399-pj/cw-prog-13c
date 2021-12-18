#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void cone(float r, float h){
    float objetosc, polePodstawy;
    polePodstawy = pow(r,2) * M_PI;
    objetosc = (polePodstawy / 3) * h;
    std::cout << "Pole podstawy :" << polePodstawy << std::endl;
    std::cout << "Objetosc :" << objetosc << std::endl;
}

int main(){
    float r,h;
    std::cout << "Podaj promien stozka: ";
    std::cin >> r;
    std::cout << "Podaj wysokosc stozka: ";
    std::cin >> h;
    cone(r,h);

    return 0;
}
