#include<iostream>
using namespace std ;

class cadd
{
public:
  float pi ;
  int  add(int a, int b);
  int mul (int ,int );
  float area(float r );
};

int cadd::mul(int a , int b ){
int ans ;
    ans = a * b ;
    return ans ;
}

int cadd::add(int a , int b ){
    int ans ;
    ans = a + b ;
    return ans ;
}

float cadd::area(float r ){
    float ans ;
    ans = pi*r*r ;
    return ans ;
}

int main(){
    float a,b,c ;
cadd oAdd ;
cadd oArea ;
    oArea.pi = 3.14 ;

  // cout<<"please enter the first no.";
   // cin>>a ;
   // cout<<"please enter the second no.";
   // cin>>b ;

    /*c = oAdd.add(a , b );
    cout<<"sum of 2 nos."<<c<< endl ;

    c = oAdd.mul(a , b );
    cout<<"multiplication of two nos."<<c ;
*/
    cout<<"please enter the radius " ;
    cin>>a;
    c = oArea.area( a );
    cout<<"area "<< c ;

   return 0 ;
}
