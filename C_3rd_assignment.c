#include <stdio.h>
int main()
{
  float l=1, area=0, add=0;
  while(1){
      area=l*l;
      add=add+area;
      printf("A�� %f�϶� ������ ���̴� %f-%f=%f \n", l,add, add-area,
          area);
     l=l/2;
     if(area<=0.000001)
         break;
       }
   printf(" ������ ���� %f�Դϴ�.\n" , add-area);
    }