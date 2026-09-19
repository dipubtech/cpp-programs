#include<iostream>
using namespace std;

int factorial (int n)
{
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

// step step by excution 
// factorial(4) = 4 factorial(3)
// factorial (4) = 4*3*factorial(2)
// factorial(4) = 4*3*2*factorisl(1)
// factorial (4) = 4*3*2*1;
// factorial (4) = 24;
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorial of number "<< a << "is "<<factorial(a)<<endl;
    return 0;
}