#include <stdio.h>


int main()

{
    
int num;
    
 printf("enter the number:");
  
  scanf("%d",&num);
   if(num<0)
  {
      printf("Invalid");
  }
  else{
 if(num%2==0)
   
 {
       
 printf("Even");
 
   }
   
 if(num%2!=0)
   
 {
        
printf("Odd");
  
  }
  }
  
return 0;

}
