#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_no;
    int balance;

public:
    // default constructor
    customer()
    {
        name = "Deepak";
        account_no = 123;
        balance = 1;
    }
    void display()
    {
        cout << name << " " << account_no << "  " << balance << endl;
    }

    //peremetrized constructor // agar peremetrize chalana hai to inline ko comment karna hoga kyu ki dono me same agrgument usekar rhe hai
    customer(string a, int b, int c){
       name = a;
       account_no = b;
       balance = c;
    }

    // constructor overloading
    customer(string a, int b){
        name = a;
        account_no = b;
    }

    // inline constructor 
   // inline customer(string a, int b, int c):name(a), account_no(b),balance(c){ 

    //}



    // copy constructor
   customer (customer &B){
       name = B.name;
        account_no = B.account_no;
       balance = B.balance;

    }

};

int main()
{
    customer A1;
    customer A2("Deepu", 267, 2);
    customer A3("Anand", 343);
    A1.display();
    A2.display();
    A3.display();
    customer A4(A3);
    A4.display();
    customer A5;
    A5 = A2;
    A5.display();


}