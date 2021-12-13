#include <iostream>
#include <cstdlib>

using namespace std;

void quick_sort(int *tab, int poczatek, int koniec)
    {
        if(poczatek >= koniec)
            return;

            int p = poczatek -1, q = koniec + 1, pivot = tab[(poczatek + koniec) / 2];

            while(true)
            {
                while(pivot > tab[++p]);
                while(pivot < tab[--q]);
                if(p<=q)
                    swap(tab[p], tab[q]);
                else
                    break;
            }

            if(q > poczatek)
                quick_sort(tab, poczatek, q);
            if(p < koniec)
                quick_sort(tab, p, koniec);
    }

int main()
{

    int *tab;

    tab = new int[64];

    cout<<"Podaj zakres: "<<endl;
    int k;
    cin>>k;

    cout << "Nieposortowana tablica:" <<endl;

    for(int i=0; i<64; i++)
    {
        tab[i]=rand()%k+1;
        cout << tab[i] << " ";
    }

    cout << endl << "Posortowana tablica:"<<endl;

    quick_sort(tab, 0, 64-1);
    for(int i = 0; i < 64; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}

    
