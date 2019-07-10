#include<stdio.h>

int main()
{
    int a[100],n,i,largest;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        largest=a[0];
        for(i=1;i<n;i++)
        {
        if(largest<a[i])
        {
            largest=a[i];
        }
        }
        printf("%d",largest);
        return 0; 
}
