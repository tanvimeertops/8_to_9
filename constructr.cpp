//:: scope resolution operator.
//c++ (unix) return 0, return 1
//std is a toolbox where cout tool is stored.
/*
constructor is a special member funtion whose task is to 
initialise the object.
characteristics of constructor:
1. its name is same as class name.
2. it has no return type.
3. it invokes automatically whenever the object is created.

types of constructor
1. default(with no parameter)
2. parameterized(with parameters)
3. copy(obj as argu) (cloning of object)

constructor overloading when a constructor of same name but 
different parameters are used in a class then 
it is constructor overloading.
 
constructor with same name and same parameter is known as constructor overriding

function with same name but 
different parameter is known as funtion overloading.
function with same name and same parameter is known as function overriding

destructor destroys the constructor.
in c++ we manually destroy a constructor.
destructor destroys the object.
in c++ objects are located in stack 
in other languages object is destroyed automatically by garbage collector
*/

#include<iostream>
using namespace std;
class constructr
{
private:
   int length,width,depth,result;
public:
    constructr();
    constructr(int l,int w,int d);
    constructr(constructr &cc);
   ~constructr();

    void volume(){
        result=length*width*depth;
    cout<<"volume of box:"<<result<<endl;
}
};

constructr::constructr()
{
    length=1;
    width=2;
    depth=3;
    cout<<"default constructor called"<<endl;
}
constructr::constructr(int l,int w,int d)
{
    length=l;
    width=w;
    depth=d;
    cout<<"parameterised constructor called"<<endl;
}
constructr::constructr(constructr &cc)
{
    length=cc.length;
    width=cc.width;
    depth=cc.depth;
    cout<<"copy constructor called"<<endl;
}
constructr::~constructr()
{
    cout<<"destructor called for:"<<result<<endl;

}
int main(){
constructr dc;
dc.volume();
constructr pc(4,5,6);
pc.volume();
constructr oc(10,10,10);
oc.volume();
constructr cc(dc);
cc.volume();

}
