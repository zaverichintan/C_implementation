#include<iostream>

using namespace std ;

class msu{
public:
    //the virtual class becomes pure virtual function
virtual void get_name() =0;
virtual void set_name()=0 ;
virtual void trial()=0 ;
virtual void trial2(){} ;
 void trial3(){cout<<"base";} ;

};


class student : public msu {
public:
    string name;
    void set_name() ;
    void get_name() ;
    void trial();

};
    void student::set_name(){
    cout<<"enter name";
    name = "a" ;
    //cin>>name ;
    }

    void student::get_name(){
    cout<<name<<endl;
    }
    void student::trial(){

    }

#define Num 3
int main(){
    //declare
    int i = 0 ;
    msu *pmsu[Num];


    for(i=0 ; i < Num ; i++){
        pmsu[i] = new student ;
        pmsu[i]->set_name();
        pmsu[i]->trial();
        pmsu[i]->trial2();
        pmsu[i]->trial3();

    }

    for(i=0 ; i < Num ; i++){
        pmsu[i]->get_name();
        delete(pmsu[i]);
    }

return 0 ;
}
