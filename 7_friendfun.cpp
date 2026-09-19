#include<iostream>
using namespace std;


class complex 
{
    int a,b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    // below lines means the non member - sumcoplex function allowed to do anything with my private parts (members) 
    friend  complex sumcomplex(complex o1, complex o2);
    void printNumber(){
        cout<<"youe number is" <<a<<" +"<<b<<"i"<<endl;
    }

};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a+o1.a),(o2.b+o2.b));
    return o3;

}

int main(){
    complex c1,c2,sum;
    c1.setNumber(1,3);
    c1.printNumber();
    c2.setNumber(3,5);
    c2.printNumber();
    sum = sumcomplex(c1,c2);
    sum.printNumber();
    return 0;
}

/*properties of friend function
1. not in the scope of  class
2. since it is not in the scope of the it cannote be called from the object of the class . c1.sumcomplex () == invalid
3. can be invoked without the help of any object
4. usually contans the object as argument
5. can be declared  inside the  PUBLIC or private section of the class 
*/