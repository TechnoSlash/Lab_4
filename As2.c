//WAP to find the smallest among the four entered numbers
#include<stdio.h>
int main(){
  int a,b,c,d;
  printf("Enter four numbers.\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<b && a<c && a<d){
    printf("%d is smallest.\n",a);
  }else if(b<a && b<c && a<d){
    printf("%d is smallest.\n",b);
  }else if(c<a && c<b && c<d){
    printf("%d is smallest.\n",c);
  }else{
    printf("%d is smallest.\n",d);
  }
  return 0;
}