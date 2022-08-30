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
except ::,.,?:,sizeOf(),pointer operator(*).
*/
/*int - primitive data type.
object -user defined datatype*/
#include<iostream>
using namespace std;
class A{
private:
int num1,num2;
public:
A(int x=0,int y=0){num1=x;num2=y;}
void sum(){
    cout<<num1<<"-"<<num2<<endl;
}
A operator-(A p){ //p->points 2nd opearand.
A temp;
temp.num1=p.num2-num2;//5-7
temp.num2=num1+p.num1;//100+3
//cout<<p.num1;
return temp;
}};
int main(){
    A a(100,7); 
    //a(100,7)
    A b(3,5);
    A c=a-b; //a.sub(b)
    //100-7

    c.sum();

}
