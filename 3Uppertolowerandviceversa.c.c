// Write a program to input a character from the user and convert 
// it to capital if entered in small and to
// small letter if it is given in capital letter.
#include<stdio.h>
#include<string.h>
int main(){
  char toUpper[100];
  int n,i;
  printf("Enter your word. \n");
  scanf("%s",toUpper);
  n=strlen(toUpper);
  for(i=0;i<n;i++){
    if(toUpper[i]>='a' && toUpper[i]<='z'){
      toUpper[i]-=32;
    }else if(toUpper[i]>='A' && toUpper[i]<='Z'){
      toUpper[i]+=32;
    }
  }
  printf("Uppercase= %s\n",toUpper);
  return 0;
}