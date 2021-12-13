#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int tab[50];
    cout<<"Podaj zakres"<<endl;
    int k;
    cin>>k;
    for(int i=0; i<=k;i++){
        tab[i]=rand()%k+1;
        cout<<tab[i]<<endl;
    }

    return 0;
}