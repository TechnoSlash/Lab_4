// Write an appropriate control structure that will examine the 
// value of a floating point variable called temp and print one 
// of the following messages, depending on the value assigned to 
// the temp.
#include<stdio.h>
int main(){
  float temp;
  printf("Enter temperature.\n");
  scanf("%f",&temp);
  if(temp>100){
    printf("Steam.\n");
  }else if(temp>0){
    printf("Water.\n");
  }else if(temp>100){
    printf("Steam.\n");
  }
  return 0;
}