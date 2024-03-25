#include <stdio.h>
#include<unistd.h>

int main() {
  char in1, in2;

  printf("Char1:");

  in1 = getchar();

  printf("Char2:\n");
  in2 = getchar();

  printf("Char1: %d\n", (int)in1);
  printf("Char2: %d\n", (int)in2);
  
  int x;
  printf("%d ",x);

  return 0;
}
