#include <stdio.h>

struct Rect
{
    int len;
    int br;
};

struct Rect inputRect()
{
    struct Rect r;
    printf("Enter length");
    scanf("%d", &r.len);
    printf("Enter breadth");
    scanf("%d", &r.br);
    return r;
}

int area(struct Rect r)
{
    return r.len * r.br;
}

int main()
{
    struct Rect r1 = inputRect();
    int a = area(r1);
    printf("Area = %d\n", a);
    return 0;
}
