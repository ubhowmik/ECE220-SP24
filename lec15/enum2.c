#include <stdio.h>

typedef enum month{JAN=7, FEB, MAR, APR, MAY, JUN=2, JUL, AUG, SEP, OCT, NOV, DEC}s;

int main()
{
	//enum month current;
	//current = MAR;
	s current;
	current= AUG;
	printf("cur_month is %d\n", current);

	return 0;
}
