#include<stdio.h>
int main ()
{

    int n=0;
    printf("ENTER THE Number ");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
        printf("\n MONDAY");
        break;
        
        case 2:
        printf("\n TUESDAY");
        break;

        case 3:
        printf("\n WEDNESDAY");
        break;

        case 4:
        printf("\n THURSDAY");
        break;

        case 5:
        printf("\n FRIDAY");
        break;

        case 6:
        printf("\n SATURDAY");
        break;

        case 7:
        printf("\n SUNDAY");
        break;
          
        default :
        printf("\n Invalid Input");
        break;
        
    }

  return 0;
}