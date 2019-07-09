#include <stdio.h>

int main()

{
    
char x;
    
   
printf("Enter any character: ");
 
scanf("%c",&x);
    
    
if (x>='a' && x<='z' ||  x>='A' && x<='Z')
        
printf("%c is a alphabet");
    
else
        
printf("%c is not alphabet");
    
return 0;

}
