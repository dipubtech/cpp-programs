#include<iostream>
using namespace std;

class Base {};
class Derived : public Base {};
int main(){
try {
    throw Derived();
}
catch(Derived d) {
    cout << "Caught Derived class exception";
}
catch(Base b) {
    cout << "Caught Base class exception";
}
}
