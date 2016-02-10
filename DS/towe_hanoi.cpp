#include<iostream>
#include <stack>

#include<math.h>
using namespace std;
const int size = 4 ;

int t1, t2 ;

stack <int> a,b,c;

void move(stack<int> &from, stack<int> &to)
{
    from.top();
    if (from.size()!=0 && to.size()!=0){
    t1 = from.top();
    t2 = to.top();

cout<<t1<<t2;

}
else cout<<"asd";
//from.print();
//to.print();
cout<<endl;
}

int main(){
int i;
int n = 4 ;
int up = pow(2,n) - 1;
int counter = 1;



a.push(1);
a.push(2);
a.push(3);
a.push(4);


if(n % 2 == 0){

    for (i = 0 ; i< 7 ; i++){

    if(counter==1){
        cout<<"ab";
        move(a,b);
    }
    else if (counter==2){
        cout<<"ac";
        move(a,c);
    }
    else if (counter==3){
        cout<<"bc";
        move(b,c);
    }
        if(counter == 3 ){
        counter = 1;
        }
        else counter++;
    }
}

return 0;
}
