/*
Write a program to find the multiplication values and the cubic values using 
inline function
*/
#include<iostream>
#include<cmath>
using namespace std;

inline int mul(int x,int y){
    return(x*y);
}
inline int cubic(int a){
    return(pow(a,3));
}
int main(){
    cout<<mul(4,4)<<endl;
    cout<<cubic(3);
}