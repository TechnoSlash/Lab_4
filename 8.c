//Write a program to take numbers from 0 to 6 from user and print 
//Sunday if the entered number is 0, Monday if entered number is 1,
// Tuesday if entered number is 2 and so on. If the number does not
// lie between 0 and 6, print an error message. Hint: use switch 
//statement
#include<stdio.h>
int main(){
  int day;
  printf("Enter the day of week from 0 to 6.\n");
  scanf("%d",&day);
  switch(day){
    case 0:{
    printf("Sunday.\n");
    break;
    }
    case 1:
    printf("Monday.\n");
    break;
    case 2:
    printf("Tuesday.\n");
    break;
    case 3:
    printf("Wednesday.\n");
    break;
    case 4:
    printf("Thursday.\n");
    break;
    case 5:
    printf("Friday.\n");
    break;
    case 6:
    printf("Saturday.\n");
    break;
    default:
    printf("Invalid input.\n");
    break;
  }
}