#include <iostream>
#include <vector>


int main(){
    std::vector<int> A;

    int start,length,counter;
    std::cout<<"Podaj wartosc startowa: \n";
    std::cin>>start;
    std::cout<<"Podaj ile iteracji mam dokonac na wartosci startowej \n";
    std::cin>>length;
    
    counter=0;

    for(int i=start;i<=start+length;i++){
        A.push_back(i);
        std::cout<<A[counter]<<"\n";
        counter+=1;
    }


    return 0;
}