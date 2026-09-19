#include<iostream>
using namespace std;

class Engineer
{
    public:
    string specilization;

    void work()
    {
        cout<<" i have specialization"<<" "<<specilization<<endl;

    }

};

class Youtuber
{
    public:
    int subscriber;
    void contentcreator()
    {
        cout<<" i have a subscriber base on"<<" "<<subscriber<<endl;

    }

};

class codeTeacher: public Engineer,public Youtuber{
    public:
    string name;
    // constructor
    codeTeacher(string name, string specilization, int subscriber)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;

    }

    void show()
    {
        cout<<" my name is"<<" "<<name<<endl;
         work();
         contentcreator();

    }

};

int main()
{
    codeTeacher A1("Deepak", " CSE",5000);
    A1.show();
}