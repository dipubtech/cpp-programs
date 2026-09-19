#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
    void work()
    {
        cout<<" i am working /n";
    }


};

// inheriatence
class student: public Human
{
    int roll_no;
    int fees;

    public:

    student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<< " age is"<<" "<<age<<" roll_no is"<<" "<<roll_no<<" fees is"<<" "<<fees<<endl;
    }
};

int main()
{
    student A1("Deepak", 19, 33, 99);
    A1.display();
}
