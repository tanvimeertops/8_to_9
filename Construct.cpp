/*constructor is a special member func whose task 
is to initialise the object 
1.same name as class name
2.no return type
3.it invokes automatically whenever the object 
is created.
types of constructor
1. default (no parameters)
2. parameterised( with argu)
3. copy(obj as argu) cloning of object.
c++ compiler unix error 1, no error 0
std is toolbox where cout cin tools stored
:: scope resolution operator.
//1.constructor overloading same function
 with diff parameter
 used more than one time in same class 
//2.function overloading:when same function 
with diff parameter is used more than one time
 in same class  
function overriding when function 
with same name and same parameter is used
it is known as function overridding.
3. constructor overriding when constructor
 with same name and same
parameter is used it is known as
 constructor overridding.
destructor : in c++ objects are destroyed 
manually with the help destructor

*/
#include<iostream>
using namespace std;
// to find the volume of box
class Construct
{
private:
    int length, width, depth,vol;

public:
    void volume(){
        vol=length*width*depth;
        cout<<"volume:"<<vol<<endl;
    }
    Construct();
     Construct(int l,int w,int d);
     Construct(Construct &cc);//copy constructor
    ~Construct(); // destructor.
};

Construct::Construct()
{
    length=1;
    width=2;
    depth=3;
    cout << "default constructor is called." << endl;
}
Construct::Construct(int l,int w,int d){
length=l;
width=w;
depth=d;
cout<<"parameterised constructor called."<<endl;
}
Construct::Construct(Construct &cc){
    length=cc.length;
    width=cc.width;
    depth=cc.depth;
cout<<"copy constructor called."<<endl;
}

Construct::~Construct()
{
    cout<<"destructor called for "<<vol<<endl;
}

int main()
{
    Construct dc;
    dc.volume();
    Construct pc(4,5,6);
    pc.volume();
    Construct co(10,10,10);
    co.volume();
    Construct cc(pc);//cc=pc
    cc.volume();
}