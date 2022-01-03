#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 mt(rd());
    int A[50];
    int k;
    cout<<"Podaj wartosc jakie ma miec k"<<endl;
    cin>>k;

    // ZAPELNIANIE TABLICY LOSOWYMI LICZBAMI Z PRZEDZIALU 0-k

    for(int i=0;i<50;i++){
        int random_int=0;
        uniform_int_distribution<int> dist(0, k);
        random_int=dist(mt);
        A[i]=random_int;
        cout<<A[i]<<"\n";
    }

    // SUMOWANIE LICZB Z TABLICY O INDEKSACH 30-42

    int suma=0;

    for(int i=30;i<=42;i++){
        suma+=A[i];
        cout<<i<<"\n";
    }

    cout<<"Suma wynosi: "<<suma<<endl;

    return 0;
}