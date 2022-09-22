/*We want to calculate the total marks of each student of a class 
in Physics,Chemistry and Mathematics 
and the average marks of the class. 
The number of students in the class are entered by the user. 
Create a class named Marks with data members for 
roll number, 
name and 
marks. 
Create three other classes inheriting the Marks class, 
namely Physics, Chemistry and Mathematics, 
which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.
/*output
Enter the num of student: 3
roll no:1
total in physics : 52
roll no:2
total marks : 56
roll no:3
total marks : 85
*/

#include<iostream>
using namespace std;
class Marks{
public:
int roll_number;
int *marks,sum=0,n=2;
//marks[30]\
//dma 
//heap

void getMark(int i){
    n=i;
    delete[]marks;
    marks=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];

    }
}

int sum_of_marks(){
    for (int i = 0; i < n; i++)
    {
       sum=sum+marks[i];
    }
    return sum;
}
};

class Physics:public Marks{

};

class Chemistry:public Marks{

};

class Mathematics:public Marks{

};
int main(){


int num;
cout<<"enter no of student:";
cin>>num;//2
Physics *p=new Physics[num];
Chemistry *c=new Chemistry[num];
Mathematics *m=new Mathematics[num];

//generate roll no automatic
for (int i = 0; i < num; i++)
{
    p[i].roll_number=c[i].roll_number=m[i].roll_number= i+1;
}

for (int i = 0; i < num; i++)
{
    cout<<"roll no:"<<p[i].roll_number<<endl;
    cout<<"\nenter marks for physics:";
    p[i].getMark(2);
    cout<<"\nTotal marks in physic:"<<p[i].sum_of_marks();
    cout<<"\nenter marks for chemistry:";
    c[i].getMark(2);
     cout<<"\nTotal marks in chemistry:"<<c[i].sum_of_marks();
    cout<<"\nenter marks for maths:";
    m[i].getMark(2);
     cout<<"\nTotal marks in maths:"<<m[i].sum_of_marks();


}

}