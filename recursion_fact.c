#include <stdio.h>

int fact(int no)
{
    if(no==0||no==1)
        return 1;
        else
    return no*fact(no-1);
}

int main()
{
    int num;
    printf("enter no");

    scanf("%d",&num);
    printf("%d",fact(num));
    
    return 0;
}
