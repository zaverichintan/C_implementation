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
   int ans;
   float sum;

   ans = oAdd.add( 2 , 3 );
   sum = oAdd.add( 2.3 , 32.3);
    cout<<"sum of 2 nos.  "<<ans<< endl ;
     cout<<"sum of 2 nos.  "<<sum<< endl ;


return 0 ;
}
