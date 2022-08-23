/*polymorphism: one name multiple form
1.runtime polymorphism:
*function over riding.
early binding (::)
late binding. virtual (pointer)
2.compile time polymorphism
->constructor overloading
->function overloading
->operator overloading.

Q. W A P in c++ to find sum of two nos using constructor overloading.*/

#include<iostream>
using namespace std;
class Sum{
    //int a=5,b=6;
    public:
    float add(float a,float b){
        cout<<a+b<<endl;
    }
};
class Add:public Sum{

public:
void add(int a,int b){
cout<<a-b<<endl;
}
};
int main(){
Add *a;
a->add(10.2,5.3);
a->add(1,2);
}