// pure vartual function
#include<iostream>
using namespace std;

class  Animal
{
    public:
    virtual void speek()=0; // pure veretual function ya abstact class


};

// inheriatence

class Dog: public Animal
{
    public:
    void speek()
    {
        cout<<" Bark\n";
    }

};

class cat: public Animal
{
    public:
    void speek()
    {
        cout<<" meow\n";
    }


};

int main()
{
    Animal *p;
    p =new Dog();
    p->speek();
    p = new cat();
    p->speek();
}