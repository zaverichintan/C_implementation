#include<iostream>
using namespace std ;

class cAdd{
public:
template <typename t1> t1  add(t1 a , t1 b );
};


template <typename t1> t1  cAdd::add(t1 a , t1 b ){
    t1 ans ;
    ans = a + b ;
    cout<<"i m in template ";
    return ans ;
}

int main(){

    cAdd oAdd ;
    cAdd* rOAdd = new cAdd() ;

   int ans;
   float sum;

   ans = oAdd.add( 2 , 3 );
   sum = oAdd.add( 2.3 , 32.3);
    //sum2 = rOAdd->add(2.3333,4.55555);

    cout<<"sum of 2 nos.  "<<ans<< endl ;
    cout<<"sum of 2 nos.  "<<sum<< endl ;
    //cout<<"sum of 2 nos.  "<<sum2<< endl ;

return 0 ;
}
