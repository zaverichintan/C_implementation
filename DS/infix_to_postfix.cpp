#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
char postfix[50];

int getWeight(char ch) {
   switch (ch) {
      case '/':
      case '*': return 2;
      case '+':
      case '-': return 1;
      default : return 0;
   }
}

void infix_to_postfix(string infix){
int i ;char c ;
    for( i = 0 ; i < infix.size();i++){
        c = infix.at(i);

        cout<<c;
        if (c=='('){

            }
        if(c==')'){


        }

        weight = getWeight(c);
        if(weight == 0){

        }
    }
}

int main() {
string s;
cout<<"Enter a infix ";
cin>>s;
infix_to_postfix(s);



 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
