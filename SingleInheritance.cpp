/* inheritance: deriving the attributes or functionality of another class.
creating a class from an existing class is called as inheritance.
types of inheritance:
1.single
2.multilevel (3)
3.multiple (ambiguity:confusion)
4.hierarchical (less in use as object creation is more than one time.)
5.hybird(hierarchical+multiple)

it will have a parent/base/super and child/derived/sub/inherited.
//Access specifier is gives the visibility and accessibility.
1.public,private,protected.
*/
//single inheritance
#include<iostream>
using namespace std;
class A{
private:
string name_local;
public:
void set_name(string name){
name_local=name;
}
void get_name(){
    cout<<"name:"<<name_local<<endl;
}

};
class B:public A{
public:
void class_B_func(){
    cout<<"i am in clas B"<<endl;
}
};


int main(){

B b;
b.set_name("arpit");
b.get_name();
b.class_B_func();
}