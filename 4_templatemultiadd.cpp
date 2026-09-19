// class addition of multiple parametre 
#include<iostream>
using namespace std;

template<class T1, class T2>
class AddTwo{
    public:
    T1 a;
    T2 b;
     AddTwo(T1 x, T2 y)
     {
        a = x;
        b = y;

     }
    
     auto add() // automatic detect the retirn type
     {
        return a+b;


     }

};

int main(){
    AddTwo<int, float>obj1(10, 3.4);
    cout<<" Addtion of two number"<<" "<<obj1.add()<<endl;
    AddTwo<float, double>obj2(2.3,3.4444);
    cout<<"Addtioon of two number float and double"<<" "<<obj2.add()<<endl;
    AddTwo<int, int>obj3(2,4);
    cout<<"Addtion of two number "<<" "<<obj3.add()<<endl;
    return 0;
    
}