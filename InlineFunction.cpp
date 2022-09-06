/*functions are used to reduced the line of code and code reuseability
-->function which is called more times are useful funtion.
-->when the function is called more no of times the 
execution time is more to overcome 
this problem inline funtion is used in c++.
-->inline function replaces the calling function code 
with the respective definition of the function.
Default parameter:value must be given from right side of parameter.
*/
#include<iostream>
#include<cmath>
using namespace std;
 inline int sum(int a, int b, int c, int d=1){
    return(a+b+c+d);//4
    //cout<<pow(n,2.);
}
int main(){
    cout<<sum(4,5,6);
}
