#include<iostream>
using namespace std ;

class cadd
{
public:
  float pi ;
    int  add(int a, int b);
    float add(float a,float b);
    short add(short a , short b );
};


int cadd::add(int a , int b ){
    int ans ;
    ans = a + b ;
    cout<<"i m in int ";
    return ans ;
}

float cadd::add(float a , float b ){
    float ans ;
    ans = a + b ;
    cout<<"i m in float ";
    return ans ;

}

short cadd::add(short a , short b ){
    short ans ;
    ans = a + b ;
    cout<<"i m in short ";
    return ans ;
}
int main(){
      float c,d;
cadd oAdd1,oAdd2 ;

   //cout<<"please enter the first no.";
   // cin>>a ;
 //cout<<"please enter the second no.";
    //cin>>b ;

    //c = oAdd.add(a , b );
   // c = oAdd1.add(3 , 2 );
    //c = oAdd1.add((float)3.2 , (float)2.4 );
    d = oAdd2.add((float)3, (float)2.2);
    cout<<"sum of 2 nos."<<c<< endl ;
    cout<<"sum of 2 nos."<<d<< endl ;

return 0 ;
}
