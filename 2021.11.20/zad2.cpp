#include <iostream>

using namespace std;

int main(){
    char tab[127];
    for (int x=33; x<127;x++){
        tab[x]=char(x);
        cout<<tab[x];
    }

    return 0;
}
