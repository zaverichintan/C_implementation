#include<iostream>
#include<string.h>
using namespace std;

/* Driver function to test above function */
int main()
{
    int y = 0 , d = 0 , m = 0;
    cout<<"year";
    cin>>y ;

    cout<<"month";
    cin>>m ;

    cout<<"day";
    cin>>d ;
    string word;
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    cout<<y<<" " << m <<"don   ";
    y = (y - m);
    if (y<3){
        y = 1 ;
    }
    else y = 0 ;
    cout<<y;
    int day_num =  ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7 ;

    switch(day_num){
    case 0 : word ="sunday"; break;
    case 1 : word ="monday"; break;
    case 2 : word ="tuesday"; break;
    case 3 : word ="wednesday"; break;
    case 4 : word ="thursday"; break;
    case 5 : word ="friday"; break;
    case 6 : word ="saturday"; break;

    }
    cout<<word;
    return 0;
}
