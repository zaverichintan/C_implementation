#include <stdio.h>
#include<stdlib.h>


void febonacci ()
{
    static int x = 0 ;
    static int y = 1;
    static int ans = 0;
    int i ;
     for (i = 0 ; i <= 10 ; i ++)
   {
    printf("ans is %d \n",ans);
    ans = x + y ;
    x = y;
    y = ans ;
   }

}
int  febonacciRec (int n)
{
    static int x = 0 ;
    static int y = 1;
    static int ans = 0;

    if(n>=0)
   {
        printf("ans is %d \n",ans);
        ans = x + y ;
        x = y;
        y = ans ;

        febonacciRec (n-1);
   }

}
int main()
{

    int ans,x,y ,i;

    //   febonacci();
    febonacciRec (10) ;

return 0 ;
}
