#include<stdio.h>
int main(){
  int a,b;
  printf("Enter any 2 numbers.\n");
  scanf("%d%d",&a,&b);
  a>b?printf("First number is larger.\n"):printf("Second number is larger.\n");
  return 0;
}// try using goto in ternary operator next time you see this