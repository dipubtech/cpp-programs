#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    try {
        

        if (num == 0)
            throw num;            // int exception
        else if (num < 0)
            throw "Negative number";   // string exception
        else
            throw 3.14;           // double exception
    }
    catch(...) {
        cout << "Unknown error or exception caught!" << endl;
    }

    
    return 0;
}
