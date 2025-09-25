#include <stdio.h>
int main() 
 {
    double n1, n2, cal;
    char op , ch;

    do 
    {
        printf("Enter the first number ");
        scanf("%lf", &n1);

        printf("Enter an operation ");
        scanf(" %c", &op); 

        printf("Enter the second number ");
        scanf("%lf", &n2);

        switch (op)
         {
            case '+':
                cal = n1 + n2;
                printf(" = %lf\n", cal);
                break;

            case '-':
                cal = n1 - n2;
                printf(" = %lf\n", cal);
                break;

            case '*':
                cal = n1 * n2;
                printf(" = %lf\n", cal);
                break;

            case '/':
                if (n2 != 0) {
                    cal = n1 / n2;
                    printf(" = %lf\n", cal);
                } else {
                    printf("Not possible \n");
                }
                break;

            default:
                printf("Invalid \n");
        }

        printf(" To exit type 'N' or type 'Y' to use again ");
        scanf(" %c", &ch);

    } while (ch == 'Y'); 

    return 0;

}