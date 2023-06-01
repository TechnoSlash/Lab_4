//3. WAP to read length and breadth of a room and print area and print
// “Auditorium” if area>2500
// “Hall” if 500<area<=2500 
//“Big room” if 150<area<=500 
// “Small room” if area<=150
#include<stdio.h>
int main(){
  int a,b,area;
  printf("Enter length and breadth.\n");
  scanf("%d%d",&a,&b);
  area=a*b;
  if(area>2500){
    printf("Auditorium\n");
  }else if(500<area){
    printf("Hall\n");
  }else if(150<area){
    printf("Big room\n");
  }else if(area<=150){
    printf("Small room\n");
  }else{
    printf("Invalid input.\n");
  }
  return 0;
}
