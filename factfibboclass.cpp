/*1. Write a program of Fibonacci and factorial using Class*/
// 0,1,1,2,3,5,8,13,
#include<iostream>
using namespace std;
class factandfibbo{
    int fact=1,i;
    public:
    void factorial(int f){
        for(i=f; i>=1; i--){
            fact*=i;
        }
        cout<<"factorial is  "<<fact<<endl;
    }
    void fibonacci(int d){
        int a=0,b=1,c=0;
        cout<<a<<","<<b<<",";
        for(i=0;i<d;i++){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<",";
        }   
    }
};

int main(){
    factandfibbo f1;
    f1.factorial(3);
    f1.fibonacci(6);
}