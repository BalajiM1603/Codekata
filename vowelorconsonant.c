#include <stdio.h>

int main()

{
   
 char x;
  
 scanf("%c",&x);
 
 if((x>=65 && x<=90) || (x>=97 && x<=122))   
  {
 if(x == 65 || x == 69 || x == 73 || x== 79 || x == 85 || x==97 || x==101 || x==105 || x==111 || x==117)
 {
  printf("Vowel");
 }
 else
 {    
 printf("Consonant");
 }
  }
  else
  {
      printf("Invalid");
  }
  return 0; 

}
