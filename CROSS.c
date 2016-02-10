#include<stdio.h>
int main()
{
int blck[9] = {-1,-1,-1,-1,-1,-1,-1,-1,-1 }  ;
int i ,j ,k ,tot = 0 ,loc = 0 ,inp = 0,check = 0 ;

printgrid:
	for ( i = 0 ; i < 9 ; i ++ ){
        if (i%3==0)
		{
			printf("\n");
		}
		printf("%d",blck[i]);

	}
        printf("enter location to be changed- ");
        scanf("%d",&loc);
        printf("enter 1 for cross and 0 for zero- ");
        scanf("%d",&inp);

        if (loc>0 && loc <= 9)
        {
            if(inp == 1 || inp == 0 ){
            blck[loc-1] = inp ;
            }
            else {
                printf("invalid");
                goto printgrid ;
                }

        }
        else{
            printf("invalid location");
            goto printgrid ;
        }


//CHECK for row
    for (i=0 ; i<3 ; i++)
    {
        tot = 0;
        for (j=0 ; j<3 ; j++)
        {
             tot += blck[i + (j *3 )];

        }
          if (tot == 0  || tot == 3 )
                break;
    }
//CHECK for col

if (tot != 0 && tot != 3 ){
        for (i=0 ; i<3 ; i++)
        {
            tot = 0 ;
            for (j=0 ; j<3 ; j++)
            {
                 tot += blck[(i * 3) + j ];
            }
                if (tot == 0  || tot == 3 )
                break;
        }
}

//CHECK for diagonal

if (tot != 0 && tot != 3 ){
        tot = 0 ;
        for (i=0 ; i<3 ; i++)
        {
            tot += blck[ (i*4) ];
        }

}
if (tot != 0 && tot != 3 ){
        tot = 0 ;
        for (i=2 ; i<=6 ; i+=2)
        {
            tot += blck[i];
        }

}
      if (tot == 0)
      {
          printf("zero is the winner");

      }
      else if (tot == 3)
      {
          printf("cross is the winner ");
      }
    else{
         goto printgrid;
        }

 return 0 ;
}
