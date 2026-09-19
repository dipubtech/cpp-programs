#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
// Default constructor
    Human()
    {

    }
    //constructor
    Human(string name, int age)
    {
        this->name = name;
        this->age =  age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" \n";
    }
    void work()
    {
        cout<<" i am working\n";
    }


};
// inheriatence keye
class student:public Human
{
    int roll_no, fees;
    public:
    // constructor ham use karte hai intilize karne ke leye 
    student(string name,int age, int roll_no, int fees):Human(name,age)

    {
        this->roll_no = roll_no;
        this->fees = fees;

    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
    }

};

class Teacher:public Human
{
    int salary;
    public:
    // constructor
    Teacher(int salary, string name, int age)
    {
    
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl; 
    }    
    

};

int main()
{
    student A1(" Deeepak",19,45,200);
    A1.display();
    Teacher A2(19, " deepu", 200);
    A2.display();
}