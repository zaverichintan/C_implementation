#include<iostream>
using namespace std ;

class carea
{
public:
  float pi ;
    float  area(float r );
    carea();
    ~carea();
};

float carea::area(float r ){
    float ans ;
    ans = pi *r *r ;
    return ans ;
}

 carea::carea()
{
    pi = 3.14;
    cout<<"i m in cons";
}
carea::~carea()
{

    cout<<"i m in destruct";
}
int main(){
    float c,d;
    carea oArea ;

    d = oArea.area(2.2);

    cout<<"area of the circle "<<d<< endl ;
return 0 ;
}
b
