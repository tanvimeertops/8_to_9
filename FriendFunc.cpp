/*friend function: it  can access the private and protected data member of the 
class without using the object

1. declaration of friend function will be done inside the class.
2. defination of friend func must be outside the class.
3. calling of friend func does not require object of the class.

why friend function:
in special case when the private and protected data members 
needs to be accessed directly without any object.
*/

/*wap in c++ using friend function.
before increement value:5
after increement value:6*/
#include<iostream>
using namespace std;
class A{
private:
int a;
public:
A(int x){
a=x;
cout<<"before increement value:"<<a<<endl;
}
friend void incree(A obj);//declaration
};
void incree(A obj){
    cout<<"after increement value:"<<++obj.a<<endl;
}
int main(){
    A aa(9);
    incree(aa);

}