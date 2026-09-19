#include<iostream>
using namespace std;
 
// forward Declaration
class complex;
class calculator {
    public:
    int add(int a, int b){
         return (a+b);
        int sumRealComplex(complex, complex);
    }
};

class complex{
    int a, b;
    
    //friend int calculator ::sumRealComplex(complex, complex);// agar ham friend class me calculatoor ke class me agare ek do excute karna ho to kar sakte haii
    //friend int calculator ::sumCompComplex(complex, complex);//

    // agar pura calculator ke function ko use karege to ase kar sakte hai
    // friend class se
    friend class calculator;

    public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout<<"your number is "<< a <<"+"<<b<<"i"<<endl;

    }

};

int main()
{
    complex o1,o2;
    o1.setNumber(1,2);
    o2.setNumber(5,8);
// error dega

}




