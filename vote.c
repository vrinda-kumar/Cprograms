#include<stdio.h>
int main ()
{

    int a=0;
    printf("ENTER THE AGE ");
    scanf("%d",&a);

    if (a>=18)
    {
        printf("\n eligible to vote ");
    }
    else 
    {
       if (a<0)
       printf("\n invalid age"); 
       else 
       printf("\n not eligible to vote");
    }

  return 0;
}