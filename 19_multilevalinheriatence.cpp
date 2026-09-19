#include<iostream>
using namespace std;

class person
{
    protected:

    string name;
    public:
    void introduce()
    {
        cout<<"Hello my name is:"<<name<<endl;
    }
};

class Employee: public person
{
    protected:
    int salary;
    public:

    void Employee_salary()
    {
        cout<<" my monthly salary is"<<" "<<salary<<endl;
    }

};

class Manager: public Employee{
    protected:
    string department;
    public:
    // constructor ham es leye use karege jo jitne v protected hai wa sab ko intilize karne ke leye

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout<<" i am leading the department"<<" "<<department<<endl;
    }
};

int main()
{
    Manager A1("Deepak", 2000, "finance");
    A1.introduce();
    A1.Employee_salary();
    A1.work();

}
