//point - line - rectangle


#include<iostream>
using namespace std ;
class shape
{
   public:
       int x , y ;;
   void putpixel() ;
   shape();
   ~shape();

};
shape::shape()
{//constructor is being called as many times a object is initialized
   cout<<"i  am  in shape constructor"<<"\n";
}
shape::~shape()
{//constructor is being called as many times a object is initialized
   cout<<"i  am  in shape dis"<<"\n";
}
 class line:public shape
{
    public:
    int x1,y1;
    line();
    ~line();
void    draw();

};
line::line()
{
    cout<<"i am in line constructor";
}
line::~line()
{//constructor is being called as many times a object is initialized
   cout<<"i  am  in line dis"<<"\n";
}
void line::draw(){
cout<< x<<" "<<y<<" "<<x1<<" "<<y1 ;
}

int main()
{
int i ;

    line  oline;
    oline.x=500;
    oline.y=6000;
    oline.x1=1500;
    oline.y1=20;
    oline.draw();
//  delete oline;
    return 0 ;
}

void shape::putpixel(){
cout<< x <<"  "<< y ;
}
