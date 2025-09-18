#include<stdio.h>
int main ()
{

    int m=0;
    printf("ENTER THE MARKS between 0-100 ");
    scanf("%d",&m);

    if (m>=90&&m<=100)
     printf("\n YOU HAVE GRADE A");
  else if (m>=75&&m<=89)
    printf("\n YOU HAVE GRADE B");
  else if (m>=50&&m<=74)
    printf("\n YOU HAVE GRADE C");
  else if(m<50)
    printf("\n YOU HAVE GRADE F");

  return 0;
}