#include<stdio.h>
#define row 4
#define col 3
void swap(int x, int y, int a[][col]);
void transpose(int a[][col],int b[][row]);
void print_2D(int a[][col]);

void print_2D_ptr(int r, int c, int *a);

int main()
{
int array[row][col]= {{1,2,3},{4,5,6},{7, 8, 9},{10, 11, 12}};
int array_t[col][row];
print_2D(array);
swap(1,2,array);
print_2D(array);
transpose(array,array_t);
print_2D_ptr(col, row, &array_t[0][0]);
return 0;
}


void swap(int x, int y, int a[][col])
{
	int temp,i;
	for (i=0; i<col; i++)
	{
		temp=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=temp;
	}
}

void transpose(int a[][col], int b[][row])
{
	int i, j;
	for (i=0; i<row; i++){
		for(j=0; j<col; j++)
		{
			b[j][i]=a[i][j];

		}
	}
}


void print_2D(int a[][col]){
int i, j;
for(i=0; i<row; i++){
for(j=0; j<col; j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
printf("\n");
}


void print_2D_ptr(int r, int c, int *a){
int i, j;
for(i=0; i<r; i++){
for(j=0; j<c; j++){
printf("%d  ", a[i*c+ j]);
}
printf("\n");
}
printf("\n");
}
