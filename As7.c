//WAP that will read two numbers, display the following menu:
// a)Summation b)Sum of squares c)Sum of cubes d)Product
#include<stdio.h>
int main(){
  int num1,num2,choice;
  printf("Enter two numbers.\n");
  scanf("%d%d",&num1,&num2);
  printf("Do you want Sum, Sum of squares, Sum of cubes or Product?\n");
  printf("Input 1,2,3,4 for the following options respectively\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    printf("Sum= %d\n",num1+num2);
    break;
    case 2:
    printf("Sum of squares= %d\n",num1*num1+num2*num2);
    break;
    case 3:
    printf("Sum of cubes= %d\n",num1*num1*num1+num2*num2*num2);
    break;
    case 4:
    printf("Product= %d\n",num1*num2);
    break;
  }
  return 0;
}