// function over loading in polymorphism compile time
#include<iostream>
using namespace std;

class Area
{
    public:
    int calculateArea(int r) // area of circle
    {
        return 3.14*r*r;
    }

    int calculateArea(int l, int b) // area of reactangle
    {
        return l*b;
    }

};

int main()
{
    Area A1, A2;
    cout<< A1.calculateArea(4)<<endl;
    cout<<A2.calculateArea(4,3)<<endl;
    
}