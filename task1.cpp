#include<iostream>
using namespace std;
class Student{
    private:
string name;
public:
Student(){
cout<<"default constructor"<<endl;
name="Unknown";
}
Student(string name_pass){
    cout<<"parameter constructor"<<endl;
name=name_pass;
}
void display(){
    cout<<"name: "<<name<<endl;
}
};
int main(){
Student s;
s.display();
Student cp("ashwini");
cp.display();
}