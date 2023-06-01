#include<stdio.h>
int main()
{
int marks;
printf("Enter the marks of student.\n"); 
scanf("%d",&marks);
marks<32?printf("Fail"):((marks>=32 && marks <45)?
printf("Third Division"):((marks>=45 && marks <60)?
printf("Second Division"):printf("First Division")));
}