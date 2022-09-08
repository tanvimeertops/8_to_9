    /*Template is blue print to make generic function or class
    1. template can be used in two places
            1.function
            2.class
    2.template makes the function or class generic
    3. most important point is that template passes datatype as argument to
    funtion or class.
    */
   /*function with template*/
   #include<iostream>
   using namespace std;
   template<typename T>
   T Max(){
   T a,b;         //int Max(int a,int b)
    cout<<"enter first: ";
    cin>>a;
    cout<<endl<<"enter second: ";
    cin>>b;
    return a>b?a:b;         //char Max(char a,char b)
   }
   
   int main(){
    cout<<Max<string>();
    cout<<Max<int>();
    cout<<Max<char>(); 
   
   }