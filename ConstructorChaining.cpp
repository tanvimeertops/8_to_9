/*constructor chaining : combination of constructor and inheritance.
function over riding : function with same name and same parameter 
and return type.
function/method over riding: when there is same function prototype
 in both base and derived class and the object of derived class calls
 the function then only the derived class function will be called.
 so we can say that the function of derived class overrides the function of 
 base class.
 polymorphism: aquirring more than one form.(changing forms)
 runtime polymorphism: function over ridding. 
*/
#include<iostream>
using namespace std;
class A{
public:
A(){
    cout<<"in class A func"<<endl;
}
void show(){
    cout<<"in show of A"<<endl;
}
};
class B:public A{
public:
B(){
    cout<<"in class B func"<<endl;
}
void show(){
    cout<<"in show of B"<<endl;
}
};
class C:public B{
public:
C(){
    cout<<"in class C func"<<endl;
}
void show(){
    cout<<"in show of C"<<endl;
}
};

int main(){
C c;
c.show();
}