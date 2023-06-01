// WAP to enter the number of days of year and find whether the 
// given year is leap year or not.
#include<stdio.h>
int main(){
  int days;
  printf("Enter number of days of the year.\n");
  scanf("%d",&days);
  if(days==365){
    printf("It is not a leap year.\n");
  }else if(days==366){
    printf("It is a leap year");
  }else{
    printf("Invalid input.(Enter either 365 or 366 next time)\n");
  }
  return 0;
}
