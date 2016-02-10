//Program author - Chintan Zaveri
//Program details -To take input and store it in structure and then print info of student with maximum marks.

#include<stdio.h>

struct student{
int rollno;
char name[40];
int marks;

} stu[3] ;


int find_max_index( struct student* s ){
    int j;  int max_index = 0;    int max_marks = 0;

    for(j = 0 ; j < 3 ; j ++ ){
        if (s[j].marks > max_marks)
        {
             max_marks = s[j].marks ;
             max_index = j ;
        }
    }
return max_index ;
}


int main()
{

    int i = 0, j = 0;
    int max_index = 0;
    int max_marks = 0;
    struct student* structptr = stu ;
    for(i = 0 ; i < 3 ; i++ ){
        printf("Enter roll number,name ,marks of student %d " ,i+1) ;
        scanf("%d %s %d" ,&stu[i].rollno,&stu[i].name,&stu[i].marks) ;
    }

    max_index = find_max_index(structptr);

    printf("maximum scorer rollno - %d \n" ,stu[max_index].rollno) ;
    printf("maximum scorer name %s \n" ,stu[max_index].name) ;
    printf("maximum scorer marks %d " ,stu[max_index].marks) ;

return 0 ;
}


