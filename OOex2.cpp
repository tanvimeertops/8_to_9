/*Write a program to concatenate the two strings using Operator Overloadin*/


#include<iostream>
#include<string.h>
using namespace std;
#define N 3
class strcat1{
char a[10];
public:
void acept_val(){
   
       cout<<"\nenter the val:";
       gets(a);
    }
void idsplay_val(){
   
        cout<<a;
    
    cout<<endl;
}
void operator+(strcat1 m){
    strcat(a,m.a);
    cout<<a;
}
};
int main(){
    strcat1 obj1;
    strcat1 obj2;
    obj1.acept_val();//1 2
    obj2.acept_val();//3 4
    obj1.idsplay_val();
    obj2.idsplay_val();
    obj1+obj2;
}