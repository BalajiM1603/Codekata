#include <stdio.h>

int main()

{
    
int num, i, sum = 0;
    
    
printf("Enter a number: ");
    
scanf("%d",&num);
    
for(i=1; i <= num; i++)
    
{
sum += i;  
    
}
    
printf("Sum is: %d",sum);
    
return 0;

}
