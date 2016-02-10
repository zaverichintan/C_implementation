#include<iostream>

using namespace std;

class a {
public:
    int z ;
   void constck();
};

class b : public a {
public:
    int z;
    void constck();
};

void a::constck(){
cout<<"in parent"<<z;
}

void b::constck(){
cout<<"in child";
}



int main (){
a p ;
b c ;

p.z=7;
//c.z = 5 ;

//p = c ;

p.constck();

return 0 ;
}

