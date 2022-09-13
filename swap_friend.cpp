/*Write a program to swap the two numbers using friend function without 
using third variable*/
#include<iostream>
using namespace std;
class A{
protected:
int a,b;
public:
A(){
    cout<<"Enter val 1:";
    cin>>a;
     cout<<"Enter val 2:";
    cin>>b;

    cout<<"Before swapping :"<<a<<"\t"<<b<<endl;
}
friend void swap(A obj);
};
void swap(A obj){
    obj.a=obj.a*obj.b; //5*10 =50
    obj.b=obj.a/obj.b; //50/10=5
    obj.a=obj.a/obj.b; //50/5=10
    cout<<"after swapping :"<<obj.a<<"\t"<<obj.b<<endl;

}


int main(){
    A aa;
    swap(aa);
}