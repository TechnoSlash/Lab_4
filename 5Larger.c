#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter any 3 numbers.\n");
  scanf("%d%d%d",&a,&b,&c);
  a>b?(a>c?printf("A is largest i.e. %d.\n",a):printf("C is largest i.e. %d.\n",c)):(b>c?printf("B is largest i.e. %d.\n",b):printf("C is largest i.e. %d.\n",c));
  return 0;
}