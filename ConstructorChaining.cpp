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

 early binding  :it works in compile time.
 late binding :it works in run time.

 1.virtual function is a keyword in c++
 2.when the base class function is made virtual then the pointer of the 
 base class is created . now the which ever reference is assigned to the 
 pointer the function of the respective class will be called. 
 3. the pointer should be created for base class



*/
#include<iostream>
using namespace std;
class A{
public:
A(){
    cout<<"in class A constructor"<<endl;
}
  virtual void show(){
    cout<<"in show of A"<<endl;
}
};
class B:public A{
public:
B(){
    cout<<"in class B constructor"<<endl;
}
virtual void show(){
    cout<<"in show of B"<<endl;
}
};
class C:public B{
public:
C(){
    cout<<"in class C constructor"<<endl;
}
void show(){
    cout<<"in show of C"<<endl;
   // A::show();
    //B::show();
}
};

int main(){
C c;
A a;
B b;
/*late binding*/
A *bptr =&a;
A *ptr1 =&b;
bptr->show(); 
ptr1->show();
//ptr->show();


/*early binding*/
//c.show();
//c.A::show();
//c.B::show();

}