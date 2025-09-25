#include<stdio.h>
int main ()
{
int no=0,i=0,ctr=0;
printf("ENTER NO");
scanf("%d",&no);

for (i=1;i<=no;i++)
{
  if (no%i==0)
   ctr++;
}
if (ctr==2)
printf("\n Prime no");
else
printf("\n Not a prime no");

return 0;
}