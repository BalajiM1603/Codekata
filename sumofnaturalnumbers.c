#include<stdio.h>
void main()
{
int num, i, sum = 0;
scanf("%d",&num);
for(i=1; i <= num; i++)
{
sum += i;  
}
printf("%d",sum);
}
