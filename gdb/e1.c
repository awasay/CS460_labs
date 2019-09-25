#include <stdio.h>

int add(int num1, int num2){
  return num1 + num2;
}

int main (int argc, char* * argv){

  int i, j;
  i = 1;
  j = 2;
  int sum = add(i,j);
  printf("%d\n",sum);
  return 0;
}