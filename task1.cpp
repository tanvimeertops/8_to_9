//wap to create calculator using constructor.
#include<iostream>
using namespace std;
class Student{
    private:
int a,b;
public:
Student(int num1,int num2){
a=num1;
b=num2;
cout<<"add: "<<a+b<<endl;
     cout<<"sub: "<<a-b<<endl;
      cout<<"mul: "<<a*b<<endl;
       cout<<"div: "<<(float)a/b<<endl;
}

// void calc(){
    
// }
};
int main(){
Student s(10,20);
//s.calc();

}