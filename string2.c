//Program author - Chintan Zaveri
//Program details -To reverse the string and print it(without other array)

#include<stdio.h>

int main()
{
   char s[20],temp ;
    int len,i;

    printf("enter a string - ");
    scanf("%s",s);
    for(len = 0 ; s[len] != '\0';len++);
    for (i = 0 ; i < (len/2) ;i++){
        temp = s[i];
        s[i] = s[(len-1)-i];
        s[(len-1)-i] = temp ;


    }
    printf("reversed string is %s",s);
return 0 ;
}

