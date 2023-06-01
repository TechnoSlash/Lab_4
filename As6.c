// Admission to a professional course is subject to be following conditions
// Marks in mathematics>=60 
// Marks in physics>=50
// Marks in Chemistry>=50 
// Total in all three subject>=200
// Give the marks in the three subjects, WAP to process the application to the list the eligible students.
#include<stdio.h>
int main(){
  int physics,chemistry,mathematics,subject;
  printf("Enter marks of physics,chemistry and mathematics respectively.\n");
  scanf("%d%d%d",&physics,&chemistry,&mathematics);
  subject=physics+chemistry+mathematics;
  if(mathematics>=60 && physics>=50 && chemistry>=50 && subject>=200){
    printf("You are eligible for admission.\n");
  }else{
    printf("Sorry you are not eligible for admission as one or more condition has not been met.\n");
  }
}