/*
Write a C program to read the contents of a file and display them on the screen.
Ask the user for a filename.
Open the file in read mode ("r").
Read the entire file
Display the contents on the console.
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


     while(fgets(t, sizeof(t), f) != NULL)
    {
        printf("%s", t);
    }

    fclose(f);

    printf("file saved\n");

//read

f = fopen(fn, "r");
    if(f == NULL)
    {
        printf("Cannot open file for reading.\n");
        return 0;
    }

    printf("----- FILE CONTENT -----\n");

    while(fgets(t, sizeof(t), f) != NULL)
    {
        printf("%s", t);
    }

    fclose(f);

    return 0;
}
