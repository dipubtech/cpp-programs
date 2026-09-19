#include<iostream>
using namespace std;

// calculate the volume of cylender
int volume(double r, int h)
{
    return (3.14* r* r*h);

}

//calculate the volume of cubic

int volume(int a){
    return a*a*a;

}

// reactangular box

int volume(int l, int b, int h){
    return (l*b*h);
}

int main()
{
    cout<< "the volume of cylender of radius 3 and height 6"<< " "<<volume(3,6)<<endl;
    cout<<"the volume of cubic is 3"<< " "<<volume(3)<<endl;
    cout<<"the volume of reactangular of lenght 3 amd breadth 7 and height 6 is" << " "<<volume(3,7,6)<<endl;
    return 0;
}
