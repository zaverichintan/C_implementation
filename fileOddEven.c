//Program author - Chintan Zaveri
//Program details -To print in file . read odd lines and print in file named odd , and even lines in file named even
    #include <stdio.h>
    #include<stdlib.h>


    int main()
    {

        FILE *fp1;FILE *fp2;FILE *fp3;

        char s[800];
        fp1= fopen ("test.txt","r");
        fp2= fopen ("testodd.txt","w");
        fp3=fopen ("testeven.txt","w");
        int ans,x,y ,i;

            if (fp1 != NULL)
            {
            int line_number = 0;
                while( fgets(s, 799, fp1) != NULL)
                {
                  if (++line_number % 2 == 0)
                    {
                        fputs(s,fp2);
                    }

                else{
                        fputs(s,fp3);
                    }
                // printf("%d: %s", ++line_number, s);
                }
            }else printf("file not exist");

        fflush(stdout);

        // make sure we close the file and clean up the buffer when we're
        // finished
        fclose(fp1);fclose(fp2);fclose(fp3);
        return 0;
    }
