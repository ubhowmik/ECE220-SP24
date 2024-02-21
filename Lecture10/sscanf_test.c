#include <stdio.h>
#include <string.h>
#define SIZE_BUF 50
int main()
{
    
    char buf[SIZE_BUF]= "123";
int rc;
 int num1, num2;
char str[20];
rc = sscanf(buf,"%d%s", &num1, str);
printf("%d %s %d\n", num1, str, rc);

}
