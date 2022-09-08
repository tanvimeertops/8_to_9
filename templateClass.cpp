/*wap in c++ for sum of two no using 
template class */
#include<iostream>
using namespace std;
template<typename T>

class templateClass{
public:
T x,y;
templateClass(){
    cout<<"enter a :";
    cin>>x;
    cout<<"enter b :";
    cin>>y;

}
T sum(){
    return x+y;
}
};
int main(){
    templateClass<int> a;
    
    cout<<a.sum();
    templateClass<string> b;
    cout<<b.sum();
}