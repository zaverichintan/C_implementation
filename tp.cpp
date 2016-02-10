#include <iostream>
using namespace std;

int main() {
    int nums , k ;

    cin>>nums>>k;

    int array[100], c, d, swap;

    for (int i = 0 ; i <100 ;i++){
        array[i] = 0 ;

    }
    for (int i = 0 ; i <nums ;i++){
        int num ;
        cin>>num ;

        array[i] = num ;

    }
for (c = 0 ; c < ( nums - 1 ); c++)
  {
    for (d = 0 ; d < (nums - c - 1); d++)
    {
      if (array[d] < array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
       for (int i = 0 ; i <nums ;i++){

          cout<<array[i] ;



    }
    k--;
   cout<<array[k];
    return 0;
}
