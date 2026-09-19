#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age, roll_no;
    string grade;

public:
    // using function to getter and setter
    void setname(string n)
    {

        name = n;
    }
    void setage(int x)
    {

        age = x;
    }
    void setroll_no(int y)
    {
        roll_no = y;
    }
    void setgrade(string z)
    {
        grade = z;
    }

    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
    void getroll_no()
    {
        cout<<roll_no<<endl;
    }
    void getgrade()
    {
        cout<<grade<<endl;
    }
};
int main()
{
    student s1;
    s1.setname(" Deepak");
    s1.setage(23);
    s1.setroll_no(45);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    s1.getroll_no();
    s1.getgrade();

    
}