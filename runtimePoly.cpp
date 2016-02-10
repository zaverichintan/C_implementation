#include<iostream>
using namespace std ;

class base{
public:
int r ;

 void draw(){
cout<<"in base"<<endl;
}

virtual void drawV(){cout<<"in base with virtual"<<endl;}
//virtual void drawV()=0 ;
};
class der : public base {
public:

void draw(){
cout<<"i m in der"<<endl;
}

virtual void drawV(){
cout<<"in der with virtual of child "<<endl;}
};

int main(){
    //declare
    base *pbase;
    der *pder;
//define
//calling of base
    pbase = new  base() ;
    pbase->draw();
//calling of der
    pder = new der();
    pder->draw();

//section 3
    pbase = new der() ;
    pbase->draw();
//section 4
    pbase->drawV();

return 0 ;
}
