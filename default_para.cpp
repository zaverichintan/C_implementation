#include<iostream>

using namespace std;

class a {
public:
    void constck(const int  *p );

};


void a::constck(const int *p){
cout<<*p;
//p++;
//cout<<*p;

}

int main (){

a ob ;
int * p;
*p = 5 ;
ob.constck(p);

return 0 ;
}

