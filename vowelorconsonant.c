#include <stdio.h>

int main()

{
   
 char x;
  
 char smallVowel, capitalVowel;
   
 printf("Enter any character: ");
   
 scanf("%c",&x);
    
  
 smallVowel = (x == 'a' || x == 'e' || x == 'i' || x== 'o' || x == 'u');
    
  
 capitalVowel = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
  
 if (smallVowel || capitalVowel)
        
 printf("%c is a vowel.", x);
    
 else
       
 printf("%c is a consonant.", x);
   
 return 0; 

}
