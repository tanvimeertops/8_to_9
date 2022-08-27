#include<iostream>
using namespace std;

class Animal{
    protected:
    int age;
    string name;

    public:
    void set_value(int a, string b){
        age=a;
        name=b;
    }
};

class Zebra:public Animal{
    public:
    void display(){
        cout<<"Name of zebra is: "<<name<<endl;
        cout<<"Age of zebra is: "<<age<<endl;
    }
};
class Dolphin:public Animal{
    public:
    void display1(){
        cout<<"Name of dolphin is: "<<name<<endl;
        cout<<"Age of dolphin is: "<<age<<endl;
    }
};

int main(){
    Zebra z;
    Dolphin d;
    z.set_value(10,"james");
    z.display();
    d.set_value(20,"dolly");
    d.display1();
}
