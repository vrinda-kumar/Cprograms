#include <stdio.h>

int mx(int a[], int n)
{
    int i,m=a[0];
    for(i=1;i<n;i++)
        if(a[i]>m)
            m=a[i];
    return m;
}

int mn(int a[], int n)
{
    int i,m=a[0];
    for(i=1;i<n;i++)
        if(a[i]<m)
            m=a[i];
    return m;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Max = %d\n",mx(a,n));
    printf("Min = %d",mn(a,n));
    
    return 0;
}
