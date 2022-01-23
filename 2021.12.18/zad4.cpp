#include <iostream>
using namespace std;
double fun(double r){
    double wynik=0;
    for (int i=0;i<r;i++){
        wynik+=i*i;
    }
    return wynik;
}

auto fSum(double (*f)(double),int n,int m)-> double{
    int suma=0;
    f=&fun;
    for(int i=n;i<m;i++){
        suma+=fun(m);
        cout<<suma<<"\n";
    }
    return suma;
}

int main(){
    double x=5;
    double y=10;
    cout << "Suma wynikow = "<< fSum(fun,x,y)<<"\n";
    return 0;
}