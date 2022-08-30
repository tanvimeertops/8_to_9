#include<iostream>
using namespace std;

class A{
    int num1,num2;
    public:
    A(int x=0, int y=0){
        num1=x;
        num2=y;
    }
    void divi(){
        cout<<num1<<"/"<<num2<<endl;
    }

    A operator/(A p){  //a operator++() prefix,post(int)
        A temp;
        temp.num1=num1/p.num1;//16/4
        temp.num2=num2/p.num2;//25/5
        return temp;
    }
};
int main(){
    A a(16,25);
    A b(4,5);
    A c=a/b; //c= a.div(b)
    c.divi();
}