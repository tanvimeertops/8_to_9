/*Write a program to find the max number from given two numbers using 
friend function 
value 1: 2   value 2: 6
max:6
*/
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
A(){
    cout<<"Enter val 1:";
    cin>>a;
     cout<<"Enter val 2:";
    cin>>b;

    cout<<"value 1 :"<<a<<"\tvalue 2:"<<b<<endl;
}
friend void max(A obj);
};

void max(A obj){
int max;
max=obj.a>obj.b?obj.a:obj.b;
cout<<"max:"<<max<<endl;
}
int main(){
    A aa;
    max(aa);
}