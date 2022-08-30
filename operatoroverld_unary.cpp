#include<iostream>
using namespace std;

class A{
    int num1;
    public:
    A(int x=0){
        num1=x;
        //num2=y;
    }
    void unary(){
        cout<<num1<<endl;
    }

    A operator++(int){  //a operator++() prefix,post(int)
        A temp;
        //temp.num1= ++num1;
        temp.num1= num1++;
        return temp;
    }
};
int main(){
    A a(21);
   // A b= ++a;
   A b= a++;
    b.unary();
}