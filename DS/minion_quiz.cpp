/*

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> arr ;
void inp(int itter){
    int num;
    for (int i = 0 ; i < itter ; i ++){
        cin>>num;
        arr.push_back(num);
    }
}
void findmax(int n , int m ){
   int oper = arr[0] ;
  // cout<<"n-"<<n;
  // cout<<"m-"<<m;
    for(int i = 1 ; i <= n ; i++){
        oper = oper&arr[i];
        cout<<oper<<endl ;
    }

    for(int i = n ; i < n+m+1 ; i++){
        oper = oper|arr[i];
        cout<<oper<<endl ;
}

//cout<<oper<<endl ;
  //  cout<<endl<<"over";

}
void sortout(){
int c , d , f , nums = arr.size();
 for (c = 0 ; c < ( nums - 1 ); c++)
  {
    for (d = 0 ; d < (nums - c - 1); d++)
    {
      if (arr[d] > arr[d+1])
      {
        f       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = f;
      }
    }
  }
}
int main() {
    int n , m , k ;
    cin>>k;
    for (int i = 0 ; i<k;i++ ){
        cin>>n ;
        cin>>m ;

        inp(n+m+1);

      //  sortout();

        findmax(n,m);

    }

    return 0;
}
