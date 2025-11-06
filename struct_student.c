/* Write a C program to define a structure called Student with the following members:
name (string of max 50 characters)
SAP ID (integer)
marks (float)
Create an array of 5 students, take input for each, and display the details of all students
*/

#include<stdio.h>
struct Student
{
    char n[50];
    int sp;
    float m;
};

int main()
{
    struct Student s[5];
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter name ");
        scanf("%s",&s[i].n);
        
        printf("Enter SAP ID ");
        scanf("%d",&s[i].sp);
        
        printf("Enter marks ");
        scanf("%f",&s[i].m);
        
        printf("\n");
    }
    
    printf("\n Student Detail \n");
    
    for(i=0;i<5;i++)
    {
        printf("Name: %s\n",s[i].n);
        printf("SAP ID: %d\n",s[i].sp);
        printf("Marks: %f\n",s[i].m);
        printf("\n");
    }
    
    return 0;
}

