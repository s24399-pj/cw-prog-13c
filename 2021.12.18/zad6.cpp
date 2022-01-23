#include <iostream>

using namespace std;

int odwroc(int t[],int n,int x)
{
    for(int i = 1;i<=n;i++){
        swap(t[i],t[n]);
        n--;
    }
    for(int i=1;i<=x;i++){
        cout << t[i] << " ";
    }
}

int main()
{
    int t[100], n,x;
    cout << "Podaj wielkosc tablicy: ";
    cin >> x;
    cout << "Ile pierwszych znakow odwrocic ? : ";
    cin >> n;
    system ("cls");
    for(int i=1;i<=x;i++){
        cout << "Podaj wartosc elementu o indeksie: "<<i<<" : ";
        cin >> t[i];
    }

    system("cls");
    cout << "Tak wyglada nasza tablica: ";
    for (int i=1;i<=x;i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;
    cout << "Tak wyglada nasza tablica po odwroceniu "<<n<<" znakow: ";
    odwroc(t,n,x);
    cout << endl;
    cout << "Tak wyglada nasza tablica po ponownym odwroceniu "<<n<<" znakow: ";
    odwroc(t,n,x);
}
