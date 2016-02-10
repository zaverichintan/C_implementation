#include<iostream>
using namespace std;
int x = 5 ;
void f1(){
int x = 10;
cout<< ++x ;
}

void f2(){
static int x  = 50 ;
cout<< ++x ;

}
void f3(){
cout<<x;
}
int main(){
 {
     int x = 10 ;
     cout<<x;
 }
 f1();f2();f3();
 f1();f2();f3();
}
