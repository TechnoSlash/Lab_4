//Write a program to input three sides of a triangle from the user
// and calculate the area of the triangle. Be sure to check that 
//the sum of two other sides is always greater than third side.
//Hint: S=(a+b+c)/2; Area=root(s(s-a)(s-b)(s-c)
#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c,s,area;
  printf("Enter side a,b,c of the triangle.\n");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  if((a+b)>c && (a+c)>b && (c+b)>a){
  area=pow(s*(s-a)*(s-b)*(s-c),0.5);
  printf("area= %f\n",area);
  }else{
    printf("Invalid.\n");
  }
  return 0;
}