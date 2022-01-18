#include <iostream>
#include <string>

using namespace std;

auto swap(int* x1,int* x2) -> void{
    int help=0;
    help=*x2;
    *x2=*x1;
    *x1=help;
}


auto main() -> int{

    int x1=2137;
    int x2=2022;
    cout<<x1<<x2<<endl;
    swap(&x1,&x2);
    cout<<x1<<x2<<endl;
    return 0;
}