#include<stdio.h>

void prime(int m , int n)
{
  int i ,j , k ,count=0;
  for (i=m ;i<=n ; i++)  {
        count=0;
    for (j=1;j<=i;j++)
    {
        if ((i%j)==0){
            count++;
        }
    }
       // printf("%d ",i);
       // printf("%d \n",count);

    if (count==2){
        printf("%d",i);

    }
  }


//printf("hey");
}

int main ()
{
prime (5,50);
return 0 ;
}
