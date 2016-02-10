#include<iostream>
using namespace std ;
class a{
int x [5];
public :
    int& operator [](int ptr){
    return x[ptr];
    }
 //  const int& operator [](int ptr){
 //  return x[ptr];
 //  }

};

int main(){
a o ;
o[2] = 5 ;
cout<<o[2];



return 0;


}

