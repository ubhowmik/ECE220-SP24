#include <stdio.h>
#include <unistd.h>

int main() {
  putchar('a');
  putchar('\n');
  putchar(97);
  sleep(5);
  putchar('\n');

  return 0;
}
