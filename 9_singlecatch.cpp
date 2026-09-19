#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a value of x";
    cin>>x;
    try
    {
        if(x==0)
        throw (x);
        if(x==100)
        throw ('x');
        if(x==1000)
        throw (4.9);


    }

    catch(...)
    {
        cout<<"some error happend:";
    }
    return 0;
    
    
}