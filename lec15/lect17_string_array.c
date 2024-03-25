#include<stdio.h>
#include<string.h>
int factorial(int );

int main()
{
    int i = 1, *ip = &i;
	
	char tt1[20];
	strcpy(tt1,"test2");
   printf("fist char: %c\n",tt1[1]);
   printf("String = %10s\n", tt1 );

    char *sports[] = {
                         "golf",
                         "hockey",
                         "football",
                         "cricket",
                         "shooting"
                     };

sports[3]="test";
//strcpy(sports[3],"test2"); //not valid


    for(i = 0; i < 6; i++)
    {
        printf("String = %10s", sports[i] );
        printf("\tAddress of string literal = %u\n", sports[i]);
    }

    // signal to operating system program ran fine
    return 0;
}