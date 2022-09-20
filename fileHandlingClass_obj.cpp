/*file handling :to store the data permanent */
/*
fstream
ofstream- to write data in text file.
ifstream- to read data from the text file.
step-1: to read the data from the console and store it in variable.
step-2: create a object of ofstream.
step-3- open and create the text file.
step 4-write data into file
step-5- close the file
*/
#include<iostream>
#include<fstream>
using namespace std;
class A{
    public:
    void write_data(){
string data;
// cout<<"enter the data:";
// getline(cin,data);
//cout<<"write of data started:";

ofstream wrrite_data;//object of ofstream.

wrrite_data.open("zaid.txt",ios::app);//open and create the text file and append in file

wrrite_data<<"\nthis is for test\n we are testing\n student name:aswini\n";//write data into file
cout<<endl<<"data written succesful";//write multiple line

wrrite_data.close();//close the file
    }


    void read_data(){
        cout<<endl<<"read from the file started"<<endl;
string data1;

ifstream read_file;//object of ifstream.

read_file.open("zaid.txt");//open and create the text file.
//read multiple line
while(getline(read_file,data1))//read data from the file
{
cout<<"data:"<<data1<<endl; //print the data into console
}
cout<<"data read succuessful";

read_file.close();//close the file
    }

};

int main(){

A a;
a.write_data();
a.read_data();




}