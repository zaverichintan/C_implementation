#include<iostream>
using namespace std ;
void swapP(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void swapR(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
void swapV(int a,int b);

int main()
{
    int x,y;
    int ans=5;
    int *pp;
    pp=&ans;



  cout<<"the ans is"<<*pp<<"\n";
    cout<<"p;ease enter the two nos.";
    cin>>x;
    cin>>y;
    //swapP(&x,&y);
    //cout<<"the value of x is "<<x<<"\n";
    //cout<<"the value of y is "<<y<<"\n";
    swapR(x,y);
    cout<<"the value of x is "<<x<<"\n";
    cout<<"the value of y is "<<y;

    return 0 ;


}
void swapV(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
