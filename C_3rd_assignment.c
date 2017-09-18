#include <stdio.h>
int main()
{
  float l=1, area=0, add=0;
  while(1){
      area=l*l;
      add=add+area;
      printf("A가 %f일때 넓이의 차이는 %f-%f=%f \n", l,add, add-area,
          area);
     l=l/2;
     if(area<=0.000001)
         break;
       }
   printf(" 넓이의 합은 %f입니다.\n" , add-area);
    }