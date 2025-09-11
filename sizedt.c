#include<stdio.h>
int main ()
{
 int i=0,f=0,c=0,d=0;

 i= sizeof(int);
 f= sizeof(float);
 c= sizeof(char);
 d= sizeof(double);

 printf("INT %d",i);
 printf("  ;FLOAT %d",f);
 printf("  ;Character %d",c);
  printf("  ;DOUBLE %d",d);
  
 return 0;
}