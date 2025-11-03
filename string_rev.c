//write a program to read a string from the user and print it in reverse order using character array
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,l;
    printf("enter string ");
    gets(str);
    
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
