#include<iostream>
//#include<account.cpp>
using namespace std ;

class account{
double savingsBalance ;

static double annualInterestRate ;

public:
    double calculateMonbthlyInterest();
    void set_bal(double a ) ;
    static void modifyInterestRate(double);
};




void account::set_bal(double a ){
    savingsBalance = a ;
}
double account::annualInterestRate = 0.04 ;

double account::calculateMonbthlyInterest(){

  return (savingsBalance * annualInterestRate) / 12 ;

}
void account::modifyInterestRate(double interest)
{

    annualInterestRate = interest ;
}



int main (){
account saver1 ;
account saver2 ;
saver1.set_bal(20000);
saver2.set_bal(30000);
cout<<saver1.calculateMonbthlyInterest()<<endl;
cout<<saver2.calculateMonbthlyInterest()<<endl;
account::modifyInterestRate(0.05);

cout<<saver1.calculateMonbthlyInterest()<<endl;
cout<<saver2.calculateMonbthlyInterest()<<endl;

return 0 ;
}
