#include<string.h>
#include <stdio.h>
#include <stdlib.h>

int randnumber()
{
int randnum ;

srand(time(NULL));
randnum = rand()%6 + 1 ;
return randnum;
}


int main()
{
int i,j ,ran, currpos = 0;
char flag ='y' ;
int board[100];

for (j= 0 ; j<100 ; j++)
{
 board[j] = 0 ;
}
// Define rule for snake & ladder.
board[2] = 7;
board[4] =13;
board[9] = 13;
board[10] = 23;
board[13] = 53;


while (flag == 'y'){
ran = randnumber();
printf("%d \n ", ran);
for(i = 1 ; i <= 20 ; i ++){
printf("%d" , i ) ;

}
if (board[currpos] >= 0)
{

    printf(" Ladder  ");

}
if (board[currpos] <0)
{

    printf(" Snake ");

}

currpos += board[currpos] + ran ;
printf("current position is - %d" , currpos ) ;

if (currpos >= 100)
{

    printf(" ******* you won ******** ");
    break;
}
printf("current position is - %d" , currpos ) ;
flag ='a';
printf("do u want to continue ? enter (y/n )") ;
scanf("%c" , &flag );
fflush(stdin);
printf("%c ", flag);
if (flag == 'y' )
{

printf("%c ", flag);
 // system("clear");

}
else if (flag == 'n' )
{
  
break ;
}


}

return (0) ;
}

