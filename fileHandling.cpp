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
int main(){
string data;
cout<<"enter the data:";
getline(cin,data);
cout<<"write of data started:";

ofstream wrrite_data;//object of ofstream.

wrrite_data.open("zaid.txt");//open and create the text file.

wrrite_data<<data;//write data into file
cout<<endl<<"data written succesful";

wrrite_data.close();//close the file

cout<<endl<<"read from the file started"<<endl;
string data1;

ifstream read_file;//object of ifstream.

read_file.open("ashwini.txt");//open and create the text file.

getline(read_file,data1);//read data from the file

cout<<"data:"<<data1<<endl; //print the data into console

cout<<"data read succuessful";

read_file.close();//close the file



}