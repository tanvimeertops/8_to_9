/* polymorphism :one name multiple form.
type of polymorphism:
1.compile time
    1.constructor overloading
    2.function overloading
    3.operator overloading.
2.run time
    function over ridding
        1.early binding
        2.late binding
operator overloading 
*/
/*3.operator overloading-> sum of two no
->when the operator performs the operation with 
different datatype(objects:user defined datatype) 
then it is called as operator overloading.
almost all the operator can be overloaded.
except ::,.,?:,sizeOf()
*/
/*int - primitive data type.
object -user defined datatype*/
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
A(int x=0,int y=0){a=x;b=y;}
void sum(){
    cout<<a<<"+"<<b<<endl;
}
A operator+(A p){
A temp;
temp.a=a+p.a; //(a=100+p.a=3)
temp.b=b+p.b; //(b=7+p.b=5)
//cout<<p.b;
return temp;
}

};
int main(){
    A a(100,7); 
    A b(3,5);
    A c=a+b; //c=add.a(b)
    c.sum();

}