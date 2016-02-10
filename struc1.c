//Program author - Chintan Zaveri
//Program details -To read formated file input and store it in a structure and then print it

#include<stdio.h>
struct student{
int rollno;
char name[40];
} stu[10] ;

int main()
{
        FILE *fp;
        char s[800];
        fp = fopen ("stu_data.txt","r");
        int i = 0, j = 0;

         while (fscanf(fp,"%d %s",&stu[i].rollno,&stu[i].name )>0){
            i++;
        }
        for(j = 0 ; j < 10 ; j ++ ){
            printf("%d " ,stu[j].rollno) ;
            printf("%s \n" ,stu[j].name) ;

        }
        fclose(fp);
return 0 ;
}


