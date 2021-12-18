#include <iostream>
#include <math.h>

bool triangle(float a, float b, float c, float &pole){
    if(a<b+c || b<a+c || c<b+a ){
        float p;
        p=0.5*(a+b+c);
        pole=sqrt(p*(p-a)*(p-b)*(p-c));
        return true;
    }
    else{
        return false;
    }
}



int main(){
    float a,b,c,pole;
    std::cout<<"Podaj bok a: \n";
    std::cin>>a;
    std::cout<<"Podaj bok b: \n";
    std::cin>>b;
    std::cout<<"Podaj bok c: \n";
    std::cin>>c;

    triangle(a,b,c,pole);

    std::cout<<pole<<std::endl;
    

    return 0;
}


