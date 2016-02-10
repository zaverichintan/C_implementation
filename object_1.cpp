#include<iostream>
using namespace std ;
class shape
{
   public:
       int x , y ;;
   void putpixel() ;
   shape();
};
shape::shape()
{//constructor is being called as many times a object is initialized


    cout<<"i  am  in constructor";
}

int main()
{
int i ;
    shape oshape[5];
    line oline;
    oline.x=500;
    olinne.y=6000;
    oline.x1=1500;
    oline.y1=20;
    //shape* ashape[7];
    shape* ashape2;
    ashape2=new shape();

  // ashape[0] = new shape();

//for(i=0;i<5;i++)
//{
 //   cout<<"enter for object"<<i ;
  //  cin>>oshape[i].x;
 //   oshape[i].putpixel();
//}

//oshape2.putpixel();
    ashape2->x = 8 ;
    ashape2->y = 10;
    ashape2->putpixel();

  delete ashape2;
    return 0 ;
}

void shape::putpixel(){
cout<< x <<"  "<< y ;
}
