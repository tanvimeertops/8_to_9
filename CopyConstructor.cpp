
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
    
     Construct(int l,int w,int d);
     Construct(Construct &cc);//copy constructor
    ~Construct(); // destructor.
};


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
    cout<<"destructor called fo  r "<<vol<<endl;
}

int main()
{ 
    Construct pc(4,5,6);
    pc.volume();
    Construct cc(pc);//cc=pc
    cc.volume();
}