#include<iostream>
using namespace std ;

class msu{
public:

 void draw(){
cout<<"in base"<<endl;
}

virtual void drawV(){
cout<<"in base with virtual"<<endl;

}
};

class chintan : public msu {
public:

void print_address(){
cout<<"i m chintan"<<endl;
}

};
class yash : public msu {
public:

void print_address(){
cout<<"i m in yash"<<endl;
}

};
class dhruv : public msu {
public:

void print_address(){
cout<<"i m in dhruv"<<endl;
}

};

int main(){
    //declare
    msu *pmsu;

    pmsu = new  msu() ;
    pmsu->print_address();

return 0 ;
}
