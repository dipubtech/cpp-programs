#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age,roll_no;
    string grade;


};

int main()
{
    student *s = new student;
    (*s).name = "Deepak";
    (*s).age = 20;
    (*s).roll_no = 34;
    (*s).grade = "A+";
    cout<<s->name<<" "<<s->age<<" " <<s->roll_no<<" " <<s->grade<<"  ";

}