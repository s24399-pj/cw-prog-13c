#include <iostream>
#include <vector>

using namespace std;


int main(){

    bool tak=true;
    vector<int> v1={};

    cout<<"Podawaj liczby(Aby przerwac wpisz 0): "<<endl;

    while(tak){
        int x=0;
        cin>>x;
        if(x==0){
            tak=false;
        }
        else{
            v1.push_back(x);
        }
    }
    cout<<"\n";

    for(int x=0;x<v1.size();x++){
        if(x%5==0){
            cout<<"\n";
        }
        cout<<v1[x]<<" ";
    }

    return 0;
}
