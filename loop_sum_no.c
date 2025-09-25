#include<stdio.h>
int main ()
{
int no=0,i=0 ,sum =0;
printf("ENTER no ");
scanf("%d",&no);

for (i=0;i<=no;i++)
{
 sum = sum +i;
}

printf("SUM OF NUMBERS = ");
printf("%d",sum);
return 0;
}