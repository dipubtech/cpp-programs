// operator overloading usin friend function
#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
void set(int r, int i){
    real = r;
    img = i;

}

friend complex operator +(complex c1, complex c2);// friend function declared
void display(){
    cout<<real<<"+ "<<img <<"i"<<endl;
}

};

 complex operator +(complex c1, complex c2){
    complex ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}

int main(){
    complex c1, c2, c3;
    c1.set(2,3);
    c2.set(4,5);
    c3 = c1 + c2;
    c3.display();
}