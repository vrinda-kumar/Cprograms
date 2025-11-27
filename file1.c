/*Write a C program to create a file and write user-entered text into it.
Ask the user for a filename.
Open the file in write mode ("w").
Allow the user to enter multiple lines of text until they type "END".
Write all lines to the file.
*/

#include<stdio.h>
#include <string.h>

int main() 
{
    char fn[100];
    char t[500];

    FILE *f;

    printf("Enter filename ");
    scanf("%s", fn);

    f = fopen(fn, "w");

    if(f == NULL)
    {
        printf(" cannot open file \n");
        return 0;
    }

    printf(" type END to stop \n");

    while(1)
    {
        scanf(" %[^\n]", t);

        if(strcmp(t, "END") == 0)
            break;

        fprintf(f, "%s\n", t);
    }

    fclose(f);

    printf("file saved\n");

    return 0;
}
