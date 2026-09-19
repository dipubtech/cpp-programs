#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual function 
        cout << "Base class show\n";
    }
};

class Derived : public Base {
public:
    void show()  {
        cout << "Derived class show\n";
    }
    void derivedFunction() {
        cout << "Special function of Derived class\n";
    }
};

int main() {
    Base* baseptr = new Derived();  // upcasting (valid)
    
    // dynamic_cast to convert Base* → Derived*
    Derived* dptr = dynamic_cast<Derived*>(baseptr);

    if (dptr != nullptr) {
        cout << "Downcasting successful!\n";
        dptr->show();               // Derived version
        dptr->derivedFunction();    // special function
    } else {
        cout << "Downcasting failed!\n";
    }

    delete baseptr;
    return 0;
}
