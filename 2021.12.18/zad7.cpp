#include <iostream>

using namespace std;

struct trojkat{
float bok_a,bok_b,bok_c;
};

float obwod(trojkat troj){
float obwod;
obwod = troj.bok_a + troj.bok_b + troj.bok_c;
cout << obwod << endl;
}

int main()
{
    trojkat trojkat1;
    trojkat1.bok_a = 5;
    trojkat1.bok_b = 9;
    trojkat1.bok_c = 13;

    obwod(trojkat1);
    return 0;
}
