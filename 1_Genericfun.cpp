// Template // function ya Generic function
// program for grater value
#include<iostream>
using namespace std;
template <class x>
x big(x a, x b)
{
    if(a>b)
    
        return a;
        else

        return b;

        
    
}

int main()
{
    cout<<big(3,4)<<endl;
    cout<<big(4.5,5.3);
    cout<<endl;
    return 0;
}

