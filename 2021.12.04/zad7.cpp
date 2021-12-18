#include <iostream>
#include <algorithm>
#include <vector>

// ten pomysl kompletnie nie rozumiem czemu nie dziala
// auto look(int n, int tab[10][10]) -> void{
//     int max_value = 0;
//     int len=0;
//     vector<int> x;
//     vector<int> y;
//     vector<int> help;

//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             if(tab[i][j] > max_value){
//                 max_value = tab[i][j];  
//             }
//             x.push_back(i);
//             y.push_back(j);
//             help.push_back(tab[i][j]);
//             len++;
//         }
//     }

//     std::cout << "Maksymalna wartosc wynosi: " << max_value << std::endl;
//     std::cout << "Lokalizacja max wartosci to (wiersz,kolumna): " << std::endl;
//     std::cout << "\n\n\n\n\n" <<help.size();


//     for(int i=0;i<=len;i++){
//         if(help[i] == max_value){
//             std::cout << "(" << x[i]+1 << "," << y[i]+1 << ")" << std::endl;
//         }
//     }

// }


auto look(int n, int tab[10][10]) -> void{
    int max_value = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(tab[i][j] > max_value){
                max_value = tab[i][j];
            }
        }
    }

    std::cout << "Maksymalna wartosc wynosi: " << max_value << std::endl;
    std::cout << "Lokalizacja max wartosci to (wiersz,kolumna): " << std::endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(tab[i][j] == max_value){
             std::cout << "(" << i+1 << "," << j+1 << ")" << std::endl;
            }
        }
    }
}


auto przekatna(int n, int tab[10][10]) -> int{
    int suma=0;
    for (int i=0; i<n;i++){
        for (int j=0; j<n; j++){
            if (i==j){
                suma+=tab[i][j];
            }
        }
    }
    return suma;
}

auto replace(int n,int k, int p, int tab[10][10]) -> void{
    for (int i=0; i<n; i++){
       std::swap(tab[k-1][i],tab[p-1][i]);
    }
    std::cout << "After replacement ->" << std::endl;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                std::cout<<tab[i][j]<< " ";
            }
            std::cout << "\n";
    }
}

auto main() -> int{

    srand(time(NULL));
    int n,m,k,p;
    int tab[10][10];

    std::cout << "Podaj ilosc wierszy: " << std::endl;
    std::cin >> n;

    std::cout << "Podaj ilosc kolumn: " << std::endl;
    std::cin >> m;

    std::cout << "Twoja tablica:" << std::endl;
    std::cout << std::endl;

    for (int i=0; i<n; i++){
        for (int k=0; k<m; k++){
                tab[i][k]=rand()%10+0;
                std::cout << tab[i][k] << " ";
            }
            std::cout << std::endl;
    }

    look(n,tab);

    std::cout << "Suma przekatnej jest rowna:" << przekatna(n,tab);
    std::cout << std::endl;

    std::cout << "Podaj numer wiersza: ";
    std::cin >> k;
    std::cout << "Podaj nr wiersza z ktorym ma nastapic zamiana: ";
    std::cin >> p;

    std::cout << std::endl;

    replace(n,k,p,tab);
    return 0;
}