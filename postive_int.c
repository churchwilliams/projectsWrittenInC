#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void); 

int main(void) 
{
    
   int n = GetPositiveInt();
   printf("you gave us the POSITIVE int of %i!\n", n);
}

int GetPositiveInt(void)
{
   int n;
   do 
   {
        printf("please give a POSITIVE integer\n");
        n = GetInt();
   }
   while (n < 1);
   return n;
}