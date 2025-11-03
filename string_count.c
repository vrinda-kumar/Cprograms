//Write a C program to count the number of vowels, consonants, digits, and special characters in a given character array (string).
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i,v=0,c=0,d=0,sp=0;
    
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        {
            char ch= s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
        else if(isdigit(s[i]))
            d++;
        else
            sp++;
    }
    
    printf("Vowels = %d\n",v);
    printf("Consonants = %d\n",c);
    printf("Digits = %d\n",d);
    printf("Special = %d",sp);
    
    return 0;
}
