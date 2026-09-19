#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age, roll_no;
    string grade;

};

int main()
{
    student s1;
   s1.name = "Deepak";
   s1.age = 19;
   s1.roll_no = 12;
   s1.grade = "A+";
   cout<<s1.age<<endl<<s1.name<<endl<<s1.roll_no<<endl<<s1.grade<<" ";

   student s2;
   s2.name = "Deepu";
   s2.age = 18;
   s2.roll_no = 34;
   s2.grade = "B+";
   cout<<s2.age<<" ";



}
