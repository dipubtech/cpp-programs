// typeid
#include<iostream>
using namespace std;
#include<typeinfo>

class Base
{
    public:
    virtual ~Base() // destructor
    {
        
        


    }

};

class Derived : public Base
{
    


};
int main()
{
    Base*baseptr = new Base();
    Base * derivedptr = new Derived();
    cout<<"base ptr is of type : "<<typeid(*baseptr).name()<<endl;
    cout<<"derivedptr is of type:"<<typeid(*derivedptr).name()<<endl;
    delete baseptr;
    delete derivedptr;
    return 0;
     

    
}