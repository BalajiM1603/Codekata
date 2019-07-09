#include <stdio.h>
int main()
{
int num , rem ,sum=0 , firstnumber;
scanf("%d",&num);
firstnumber=num;
while(num!=0)
{
rem=num%10;
sum = sum*10 +rem;
num /=10;
}
if(firstnumber == sum)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
