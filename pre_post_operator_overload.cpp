#include<iostream>
using namespace std ;

class a{
int x ;
public :

   void operator ++(){
       cout<<"pre";

   }
 //  void operator ++(int){
 //      cout<<"post";
 //  }
};

int main(){
a o ;
//o++;
++o ;
o++;

return 0;


}

