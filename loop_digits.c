#include<stdio.h>
int main ()
{
int no=0,ctr=0;
printf("ENTER NO");
scanf("%d",&no);

while (no!=0)
{

   ctr++;
   no =no/10;
}
 printf("\n output = %d",ctr);

return 0;
}