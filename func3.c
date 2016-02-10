//Program author - Chintan Zaveri
//Program details -To swap numbers using function (pass by reference )
//*************************************************

#include<stdio.h>

void swap(int*,int*);

int main() {
    int num1 , num2 ;
     printf("enter number 1 ");
     scanf("%d",&num1);
     printf("enter number 2 ");
     scanf("%d",&num2);
     swap(&num1,&num2);
     printf("swapping done \n");
     printf("number 1 %d \nnumber 2 %d  ",num1 ,num2);

   return (0);
}
void swap(int* a,int* b ){
    int temp ;
    temp = *a;
    *a = *b ;
    *b = temp ;
}

