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
int *marks;


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
cin>>num;
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
}

}