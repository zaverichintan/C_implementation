#include<iostream>
using namespace std ;

template <typename t1>
t1  add(t1 a , t1 b ){
    t1 ans ;
    ans = a + b ;
    cout<<"i m in template ";
    return ans ;
}

int main(){

//scadd oAdd ;
   int ans;
   float sum;

   ans = add( 2 , 3 );
   sum = add( 2.3 , 32.3);
    cout<<"sum of 2 nos.  "<<ans<< endl ;
     cout<<"sum of 2 nos.  "<<sum<< endl ;


return 0 ;
}
