#include <iostream>
#include <vector>

using namespace std;

int main(){
    char tab[17];

    tab[0]=65;
    tab[1]=108;
    tab[2]=101;
    tab[3]=107;

    tab[4]=79;
    tab[5]=112;
    tab[6]=97;
    tab[7]=108;
    tab[8]=107;
    tab[9]=97;

    for (int x=0;x<10;x++)
    {
        cout<<tab[x];
    }

    for (int x=0;x<10;x++)
    {
        tab[x]=tab[x]+3;
        cout<<tab[x];
    }

    return 0;
}