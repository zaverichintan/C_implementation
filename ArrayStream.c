#include <iostream>
using namespace std ;

class Array
{
    int streamData[500];

    istream & operator >> (istream & din ,Array & inData);
 //   ostream & operator << (int & outData);

}


Array::operator >> (int & inData)
{

din>>streamData[1];
cout<<streamData[1]; ;

}


int main(){

Array a ;
cin>>a ;

return 0 ;

}
