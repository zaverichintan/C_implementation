//Program author - Chintan Zaveri
//Program details -To sort single dimensional array by bubble sorting method (ascending)
//*************************************************

#include<stdio.h>

void printarray(int x[],int size)
{
    int i ;
    for ( i = 0 ; i <size ; i ++)
    {
        printf("%d" , x[i]);
    }
}
int main()
{
    int i , j = 0, temp =0  ;
    int a[10]= {5,3,8,9,2,1,4,7,6,0};
    for (i = 0 ; i <10 ; i++){
        for (j = 0 ; j < (10-i) ; j++){
            if (a[j]>a[j+1])
                {
                    temp = a[j] ;
                    a[j] = a[j+1] ;
                    a[j+1] = temp ;
                }
        }
    }
    printarray(a ,10 );
return 0 ;
}

