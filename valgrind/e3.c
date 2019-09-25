
#include <stdio.h>
#include <stdlib.h>

// Example 3: memory leaks
int main(int argc, char** argv){
  int i;
  int *a;

  for (i=0; i < 1; i++){
    a = malloc(sizeof(int)*100);
  }

  free(a);

  return 0;
}