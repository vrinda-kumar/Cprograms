#include<stdio.h>
int main ()
{

    int n=0 ; 
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);

    int a=0,p1=0,p2=0;
    
    a=n;
    p1= ++n; //preincrement
    p2= a++; //postincrement

    printf(" PRE INCRE = %d",p1);
    printf("\n POST INCRE = %d",p2);

    return 0;
}