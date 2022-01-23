#include <iostream>
#include <vector>

using namespace std;

struct Student{
string imie, nazwisko;
vector <int> oceny;
};

float average_of(Student student){
    float suma=0;

    for(int i=0;i<student.oceny.size();i++){
        suma += student.oceny[i];
    }

    cout << suma/student.oceny.size() << endl;
    return suma/student.oceny.size();
};

Student get_best_student(vector <Student> studenci){
    int highest_average_student_index=0;
    float highest_average=0;

    for (int i=0; i<studenci.size(); i++){
        float current_student_average=0;

        Student current_student;
        current_student=studenci[i];
        current_student_average=average_of(current_student);
        if(current_student_average>highest_average){
            highest_average=current_student_average;
            highest_average_student_index=i;
        }
    }
    cout<<"highest_average_student_index: "<<highest_average_student_index<<endl;
    cout<<"highest_average: "<<highest_average<<endl;
    return studenci[highest_average_student_index];
};




int main()
{
    Student student1;
    student1.imie = "Kuba";
    student1.nazwisko = "Kowalski";
    student1.oceny.push_back(4);
    student1.oceny.push_back(3);
    student1.oceny.push_back(5);
    student1.oceny.push_back(3);

    Student student2;
    student2.imie = "Kamil";
    student2.nazwisko = "Bartkowski";
    student2.oceny.push_back(3);
    student2.oceny.push_back(4);
    student2.oceny.push_back(4);
    student2.oceny.push_back(3);

    Student student3;
    student3.imie = "Kacper";
    student3.nazwisko = "Pole";
    student3.oceny.push_back(5);
    student3.oceny.push_back(4);
    student3.oceny.push_back(3);
    student3.oceny.push_back(5);

    average_of(student1);


    vector <Student> Studenci = {student1,student2,student3};


    get_best_student(Studenci);

    return 0;
}
