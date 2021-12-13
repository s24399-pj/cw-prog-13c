#include <iostream>


void sortowanie_babelkowe(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}


void clear_screen(){
    int x=100;
    for(int i=0;i<x;i++){
        std::cout<<"\n";
    }

}


int main(){

    int ile;

    std::cout<<"Ile elementow bedzie zawierac twoja tablica? \n";

    std::cin>>ile;

    int *tablica;
    tablica=new int [ile];

    clear_screen();


    std::cout<<"Witaj w sortowniku bombelkowym. \n Podawaj liczby do tabeli ktora posortuje dla ciebie \n";

    for(int i=0;i<=ile;i++){
        int x;
        std::cin>>x;
        std::cout<<" ";
        tablica[i]=x;
    }

    sortowanie_babelkowe(tablica,ile);

    clear_screen();

    for(int i=0; i<ile; i++)
    {
        std::cout<<tablica[i]<<" ";
    }

    return 0;
}