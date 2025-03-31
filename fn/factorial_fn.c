#include <stdio.h>
int factorial (int);

void main(){
  int num, f;
  printf("Enter a number: ");
  scanf("%d", &num);
  f = factorial(num);
  printf("Factorial of %d is %d", num, f);
  printf("\n");
}

int factorial(int n){
  int i, r=1;
  for (i=1; i <= n; i++){
    r = r * i;
  }
  return r;
}