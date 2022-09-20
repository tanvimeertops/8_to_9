/*Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include<iostream>
using namespace std;
#define N 3
class matrix{
int a[10];
public:
void acept_val(){
    for (int i = 0; i < N; i++)
    {
       cout<<"\nenter the val:";
       cin>>a[i];
    }
}
void idsplay_val(){
    for (int i = 0; i < N; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
void operator+(matrix m){
    int res[10];
    for (int i = 0; i < N; i++)
    {
       res[i]=a[i]+m.a[i];
    }
    
    for (int i = 0; i < N; i++)
    {
       cout<<res[i]<<"\t";
    }
    cout<<endl;
}
};
int main(){
    matrix obj1;
    matrix obj2;
    obj1.acept_val();//1 2
    obj2.acept_val();//3 4
    obj1.idsplay_val();
    obj2.idsplay_val();
    obj1+obj2;
}