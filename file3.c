/*
Write a C program to append new text to an existing file.
Ask the user for a filename.
Open the file in append mode ("a").
Let the user input additional text until they type "STOP".
Append the text at the end of the file without overwriting existing content.
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

    // append 

    f = fopen(fn, "a");   // APPEND mode
    if(f == NULL)
    {
        printf(" File cannot open.\n");
        return 0;
    }

    printf("Enter text to append type STOP to finish \n");

    while(1)
    {
        fgets(t, sizeof(t), stdin);

        // Remove newline from input
        t[strcspn(t, "\n")] = '\0';

        if(strcmp(t, "STOP") == 0)
            break;

        fprintf(f, "%s\n", t);
    }

    fclose(f);

    return 0;
}