#include<stdio.h>
//void array(int A[5]);
void array(int *A);
int main()
{
int B[5]={1,2,3,4,5};
array(B);
printf("%d\n",B[3]);
return 0;
}
//void array(int A[5])
void array(int *A)
{
A[3]=10;
}
