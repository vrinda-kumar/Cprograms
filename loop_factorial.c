#include<stdio.h>
int main ()
{
int no=0,f=1;
printf("ENTER NO");
scanf("%d",&no);

while(no>0)
{
  f=f*no;
 no--;
}
 
printf("\n Factorial = %d",f);

return 0;
}