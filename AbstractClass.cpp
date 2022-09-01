/*Abstraction is process where only essential information are given
 and details are hidden.
Abstract class 
-->abstract class must have atleast one pure virtual function.
-->pure virtual function will be created by pure operator(=0)
-->virtual function will be made in base class only.
-->only the declaration part will be there in base class
-->definition part of the virtual function will be there in derived class.
in case virtual function is not defined in the derived class then 
derived class will be abstract class.
-->abstract class cannot create any object
*/
#include<iostream>
using namespace std;
class base{
    
    public:
virtual void show()=0;
};
class derived:public base{
    public:
void show(){
    cout<<"in virtual function";
}
};
int main(){
derived d;
d.show();

}

