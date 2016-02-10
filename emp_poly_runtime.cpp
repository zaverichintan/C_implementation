#include<iostream>
using namespace std ;

class msu{
public:

virtual void print_address(){
cout<<"in base"<<endl;
}

};

class chintan : public msu {
public:
void print_address(){
cout<<"chintan - vadodara"<<endl;
}
};

class yash : public msu {
public:
void print_address(){
cout<<"yash - junagadh"<<endl;
}
};

class dhruv : public msu {
public:
void print_address(){
cout<<"dhruv - surendranagar"<<endl;
}

};

int main(){
    //declare
    int i = 0 ;
    msu *pmsu[3];

    pmsu[0] = new chintan() ;
    pmsu[1] = new yash() ;
    pmsu[2] = new dhruv() ;


    for(i=0 ; i < 3 ; i++){

        pmsu[i] ->print_address();

    }

return 0 ;
}
