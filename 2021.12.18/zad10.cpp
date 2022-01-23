#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    float srednia;
};

struct group{
    string nazwa;
    vector <student> studenci;
};

void AddStudentToGroup(student const& new_student,group &g){g.studenci.push_back(new_student);}

void ShowGroup(group g){
        cout<<g.nazwa<<": ";
        for (auto stud: g.studenci) {
            cout<<stud.imie<<" "<<stud.nazwisko<<"; "<<stud.srednia<<" ";
        }
        cout << "\n";
}


int main()
{
    string names[12]={"Maciej","Konrad","Sebastian","Anna","Beata","Agata","Patryk","Oliwier","Milosz","Oktawia","Maja","Patrycja"};
    string surnames[5]={"Kowalski/a","Nowakowski/a","Jurkiewicz","Brzeczyszczykiewicz","Kocinak"};
    string groups[3]={"1A","2A","3A"};

    vector <int> used_index_groups;

    for(int i=0;i<(sizeof(groups)/sizeof(*groups));i++){
        group gro;

        int randomint=rand()%sizeof(groups)/sizeof(*groups);

        for(int y=0;y<99;y++){
            if(std::find(used_index_groups.begin(),used_index_groups.end(),randomint)!=used_index_groups.end()){
                randomint=rand()%sizeof(groups)/sizeof(*groups);
            }
            else{
                break;
            }
        }

        used_index_groups.push_back(randomint);

        gro.nazwa=groups[randomint];
        gro.studenci={};

        for(int j=0; j<10;j++){
            student stud;
            int v1,v2,v3,srednia;
            v1=rand()%12;
            v2=rand()%5;
            v3=rand()%2;
            srednia=rand()%3+3;
            stud.imie=names[v1];
            stud.nazwisko=surnames[v2];
            stud.srednia=srednia;

            AddStudentToGroup(stud,gro);
        }
        ShowGroup(gro);
        cout<<"\n";
    }


    return 0;
}