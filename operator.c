#include<stdio.h>
int main ()
{

    int a=0,b=0;
    printf("ENTER THE Numbers ");
    scanf("%d",&a);
    scanf("%d",&b);

   int o =0;
   printf("\n enter 1 for + \n enter 2 for - \n enter 3 for * \n enter 4 for /");

   scanf("%d",&o);

    switch (o)
    {
        case 1:
        printf("\n %d",a+b);
        break;
        
        case 2:
        printf("\n %d",a-b);
        break;

        case 3:
        printf("\n %d",a*b);
        break;

        case 4:
        printf("\n %d",b/a);
        break;

        default :
        printf("\n Invalid Input");
        break;
    }

  return 0;
}