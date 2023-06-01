// Write a program to enter any number from the user. If the number
// is less than 25 then, check whether the entered number is odd or
// even and print appropriate message. If the number is greater than 
// or equal to 25, then square it and display the result.
#include<stdio.h>
int main(){
  int num;
  printf("Enter a number.\n");
  scanf("%d",&num);
  if(num>=25){
    num=num*num;
    printf("%d\n",num);
  }else{
    if(num%2==0){
      printf("The number is less than 25 and even.\n");
    }else{
      printf("The number is less than 25 and odd.\n");
    }
  }
}