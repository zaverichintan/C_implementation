#include<iostream>
using namespace std ;

class a{
public :
int x ;
   int operator ++(){
       x++;
       return x ;
   }
int operator ++(int){
        a t = *this ;
        x++;
        return t.x ;
   }

};

int main(){
a o ;

o.x= 5;
cout<< ++o ;
cout<<o.x ;

cout<<"pre over";

cout<< o++;
cout<< o.x;

return 0;


}


