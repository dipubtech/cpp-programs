// write a program that division two no and store the result in an array element there are two possible exception that can occur inthis program
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;
    float arr[5];   // array to store result
    int index;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter array index to store result (0-4): ";
    cin >> index;

    try {
        // Exception 1: Divide by zero
        if (b == 0)
            throw ("Division by zero is not allowed.");

        // Exception 2: Array index out of range
        if (index < 0 || index >= 5)
            throw ("Array index out of bounds.");

        // Safe division
        float result = (float)a / b;
        arr[index] = result;

        cout << "Result stored successfully!" << endl;
        cout << "arr[" << index << "] = " << arr[index] << endl;
    }
    catch (char *msg) {
        cout<<"erroe is:"<<msg<<endl;
    }
    catch (char *msg) {
        cout << "Error:"<<msg<<endl;
    }

    return 0;
}
