#include <stdio.h>

/* This program checks  if a number is a palindrome 
 * and if so returns 0, otherwise -1. The technique used 
 * is generating a new number that is the reverse of the 
 * the original number and then checking if they are the 
 * same or not.
 */
int main()
{
   int num, reverse = 0, holder, remainder;
   scanf("%d", &num);
    
   holder = num;
   while(holder!=0)
   {
      remainder=holder%10;
      reverse = reverse*10 + remainder;
      holder /= 10;
   } 

   /* If the original number is equal to
    * to its reverse then its palindrome
    * else it is not.
    */ 
   if(reverse_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
