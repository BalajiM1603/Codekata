#include<stdio.h>
int main()
{
    int N,K,arr[100],i,sum=0;
    scanf("%d\t%d",&N,&K);
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<K;i++)
        sum=sum+arr[i];
    printf("%d",sum);
}
