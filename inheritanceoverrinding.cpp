#include<iostream>
using namespace std;

class Cat{
    public:
    void speak(){
        cout<<"cat says meow"<<endl;
    }
};
class Horse:public Cat{
    public:
    void speak(){
        cout<<"horse says neigh"<<endl;
    }
};
class Pig:public Horse{
    public:
    void speak(){
        cout<<"guinea pig says weep weep"<<endl;
    }
};
int main(){
    Pig p;
    Horse h;
    h.speak();
    p.speak();
}