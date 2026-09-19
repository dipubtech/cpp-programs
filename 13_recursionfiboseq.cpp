#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<2)
    {
        return 1;

    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

int main()
{
    int a;
    cout<<"enter the number " <<endl;
    cin>>a;
    cout<<"the fibonacci sequence "<<a<<"is"<< fibo(a)<<endl;
    return 0;
}