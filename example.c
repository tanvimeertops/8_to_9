#include <stdio.h>
//leap year : no which divisible by 4 but not divisible by 100
//factorial : 5*4*3*2*1=120

void main(){
    //find This year is leap year or Not;
    
    // printf("Enter x: ");
    // scanf("%d",&x);
    // printf("Enter y: ");
    // scanf("%d",&y);
    // if(x%4==0&&x%100!=0){
    //     printf("This Year is Leap Year");
    // }else{
    //     printf("This Year is not Leap Year");
    // }
    // printf("\nvalue before swapping: %d %d",x,y); 
    // x=x*y; 
    // y=x/y; 
    // x=x/y; 

    // printf("\nAfter swapping: %d %d",x,y);
    //fibonacci : 0 1 1 2 3 5 8 13 21 34
    int x=64728, rem;
    //printf("%d \t %d",x,y);
    //int fibo;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        printf("%d",rem);
    }
    

} 
