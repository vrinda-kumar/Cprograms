#include<stdio.h>
int main ()
{

    int a=0,b=0,c=0;
    printf("ENTER THE THREE NUMBERS");
    scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);

    int g=0;
    
    g= ((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:((c>a)&&(c>b))?c:g ;

    printf(" GREATEST = %d",g);
  return 0;
}