#include <stdio.h>

int rev(int n)
{
    int r=0,d;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    return r;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
        a[i]=rev(a[i]);
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
