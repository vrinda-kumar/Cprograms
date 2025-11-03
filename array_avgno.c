#include <stdio.h>

float avg(int a[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return (float)s/n;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
        float avge = avg(a,n);
            printf("Average = %.2f",avge);
    
    return 0;
}
