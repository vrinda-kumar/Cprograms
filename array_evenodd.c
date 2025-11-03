#include <stdio.h>

int even(int a[], int n)
{
    int i,e=0;
    for(i=0;i<n;i++)
        if(a[i]%2==0)
            e++;
    return e;
}

int odd(int a[], int n)
{
    int i,o=0;
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
            o++;
    return o;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
        int ev= even (a,n);
        int od = odd(a,n);

    printf("Even = %d\n",ev);
    printf("Odd = %d",od);
    
    return 0;
}
