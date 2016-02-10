/*
Problem Statement

The minions have finally found their new master. This time, he is a Math professor and he is trying very hard to teach them math. He has been teaching them bitwise operators for over a year! They learnt about AND(&) and OR (|) operators and it is time for a quiz to test them.

The quiz is very simple, they will be given a number A of AND(&) operators, a number B of OR (|) operators and (A + B + 1) integers. They have to find the maximum number that can be obtained by inserting the & and | operators between the given nonnegative integers without changing their order.

Finally, there is a special requirement for this quiz, they are required to evaluate the operators from left to right.

Input Format

The first line of the input will be a single integer T, the number of test cases (1 ≤ T ≤ 100), followed by T test cases.

Each test case will consist of 2 lines. The first line will contain 2 integers A and B (0 ≤ A, B ≤ 10,000) representing the number of AND(&) and OR (|) operators, respectively. The second line of input will consist of (A + B + 1) 64-bit nonnegative integers separated by single spaces.

Output Format

For each test case, output a single line containing the maximum number that can be obtained by inserting the operators between the given integers.

Sample Input

2
1 1
1 4 5
2 2
2 3 11 4 5

Sample Output

5
7

Explanation

Source: 2015 Arab Collegiate Programming Contest
*/

//#include <vector>
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
   int oper;
    for(int i = 0 ; i < n+m ; i++){
        cout<<arr[i];
    }
    cout<<endl<<"over";

}
void sort(){
int c , d , swap , nums = arr.size();
 for (c = 0 ; c < ( nums - 1 ); c++)
  {
    for (d = 0 ; d < (nums - c - 1); d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
}
int main() {
    int n , m , k ;
    cin>>k;
    for (int i = 0 ; i<k;i++ ){
        cin>>n>>m ;
        inp(n+m+1);
        sort();

        findmax(n,m);

    }

    return 0;
}
