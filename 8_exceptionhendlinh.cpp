#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a two number";
    cin>>a>>b;

    try{
        if(b!=0)
        {
            c = a/b;
            cout<<"Devision\n" <<c;

        }
        else{
            throw (b);
        }
    }
    catch(int b)
    {
        cout<<" divided by "<<b;
    }
    return 0;
}