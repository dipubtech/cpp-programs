// virtual function
#include<iostream>
using namespace std;

class Animal
{
    public:
    // virtual
    virtual void speek()
    {
        cout<<" huhu\n";

    }


};

class Dog:public Animal
{
    public:
    void speek()
    {
        cout<<" Bark\n";
    }

};

int main()
{
    Animal *p;
    p = new Dog();
    p->speek();
}