//6) Write a program to solve the quadratic equation Ax2 + Bx + C = 0
// . Take coefficients A, B and C
#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c,root1,root2;
  printf("Enter a,b,c of Ax2 + Bx + C = 0.\n");
  scanf("%f%f%f",&a,&b,&c);
  if(a!=0){
  root1=(-b+pow(b*b-4*a*c,0.5))/(2*a);
  root2=(-b+pow(b*b-4*a*c,0.5))/(2*a);
  printf("root1= %f.\n",root1);
  printf("root2= %f.\n",root2);
  }else{
    printf("The eqn is not quadratic.\n");
  }

  return 0;
}