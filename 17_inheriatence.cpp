#include<iostream>
using namespace std;

class Human{
   // string Relegion,color;
    public:
    string name ;
    int age, weight ;


};

// inheriatence
class student: private Human{
    private:
    int roll_no,fees;

    public:
    // constructor use
    student(string name, int age, int weight,int roll_no, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<" age is"<<" "<<age<<"  "<<"weight is"<<" "<<weight<<" "<<" roll_no is"<<" "<<roll_no<<" "<<" fees is"<<" "<<fees<<endl;
    }
};

class Teacher: public Human{
    int salary,id;
    public:
    //constructor use
    Teacher(int salary, int id){
        
        this->salary = salary;
        this->id = id;
    }

    void display(){
        cout<<" salary is"<<" "<<salary<<" id is"<<id<<endl;
    }

};

int main(){
    student A("Deepak", 19, 60, 12,200);
    A.display();
    Teacher B( 5000, 45);
    B.display();
    
    


}