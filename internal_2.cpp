#include<iostream>
using namespace std ;
class rational{
private:
    int num1 , num2 ;
    int den1 , den2 ;
    int num_ans , den_ans ;
public:
 rational(int,int,int,int);
 void add();
};

 rational::rational(int a = 0 , int b = 1 , int c = 0 , int d = 1){
num1 = a ;
num2 = c ;
den1 = b ;
den2 = d ;
}
void rational::add(){

num_ans = num1*den2 + den1*num2 ;
den_ans = den1 * den2 ;
cout<<num_ans<<"/"<<den_ans ;

}

int main(){
 rational* ob = new rational(2,3,4,5);
ob->add();

return 0 ;
}
