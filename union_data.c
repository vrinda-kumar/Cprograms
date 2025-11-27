#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n\n", d.str);

    d.f = 25.75;
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n\n", d.str);

    strcpy(d.str, "Hello");
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n", d.str);

    return 0;
}
