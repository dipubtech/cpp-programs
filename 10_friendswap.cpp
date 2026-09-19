#include<iostream>
using namespace std;
class  c2; // forwars decleration

class c1{
int val1;
friend void exchange (c1 & , c2 &);
public:
void indata(int a)
{
    val1 = a;

}

void display(void )
{
    cout<<val1<<endl;
}
};

class c2{
    int val2;
    friend void exchange(c1 & , c2 &);
    public:
    void indata(int a){
        val2 = a;
    }

    void display(void){
        cout<<val2<<endl;
    }

};


/*
tric for swap of two numer

temp = a;
a = b;
b = temp;

*/

// function declare
void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;


}

int main()
{
    c1 oc1;
    oc1.indata(6);
    c2 oc2;
    oc2.indata(12);

    exchange(oc1, oc2);
    cout<<"the value of c1 after exchanging  becomes: " ;
    oc1.display();
    cout<<" the value of c2 after exchanging beomes:";
    oc2.display();

    return 0;

}