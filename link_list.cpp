//function template
#include<iostream>

using namespace std ;

class emp{
private:
    int sal;
public:
    int add(int a , int b);
};

int emp::add(int a , int b ){
 return a+b ;
 }
int main()
{
emp oemp ;
oemp.add(3 , 5 );
 return 0 ;
}


