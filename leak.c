#include <stdio.h>
#include <stdlib.h>

int main (){

  int* data = malloc(5 * sizeof(int));
  data[0] = 42;
  printf ("Перове элемент: %\n" , data[0]);

  return 0;
}
