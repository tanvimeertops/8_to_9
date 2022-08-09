//1.default constructor
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
     
    ~Construct(); // destructor.
};

Construct::Construct()
{
    length=1;
    width=2;
    depth=3;
    cout << "default constructor is called." << endl;
}



Construct::~Construct()
{
    cout<<"destructor called for "<<vol<<endl;
}

int main()
{
    Construct dc;
    dc.volume();
   
}