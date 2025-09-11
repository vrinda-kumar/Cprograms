#include<stdio.h>
int main ()
{

    int no=0,a=0;
    printf("ENTER THE NUMBER ");
    scanf("%d",&no);
    
    a=(no&1);
    int b= (a==0)?1:0;
    printf("%d",b);

   return 0;
}