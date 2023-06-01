//4. WAP to check whether the number entered by the user is 
//divisible by 3 but not by 7.
#include<stdio.h>
int main(){
  int a;
  printf("Enter a number.\n");
  scanf("%d",&a);
  if(a%3==0 && a%7!=0){
    printf("The number is divisible by 3 but not by 7.\n");
  }else{
    printf("The number is either divisible by 3 or not divisible by 7.\n");
  }
  return 0;
}