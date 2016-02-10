#include <iostream>
using namespace std ;

class Array
{
    int streamData[500];

    istream & operator >> (istream & din );
 //   ostream & operator << (int & outData);

} ;


istream & Array::operator >> (istream & din)
{

din>>streamData[1];
cout<<streamData[1];
return (din) ;

}


int main(){

Array a ;
cin>>a ;

return 0 ;

}
