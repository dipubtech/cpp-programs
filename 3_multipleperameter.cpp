#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PERAMETRE (ONE , TWO MORE THAN TWO)
template<class T1, class T2.....(COMMA SEPARATED)>
class nameofclass{
// body
}
*/

template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b) // constructor use
    {
        data1 = a;
        data2 = b;

    };

    void display()
    {
        cout<<this->data1<<endl<<this->data2;

    }

};

int main()
{
    myclass<char, float> obj('k',2.4);
    obj.display();
    return 0;
}

