#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int len = 10;
    int key = 3;
    
    int low = 0, high = len - 1, currentIndex;
    
    while (low <= high)
   {
       currentIndex = (high + low) /2;
       if (key == arr[currentIndex])
       {     
           printf("%i is in position arr[%i]!\n", key, currentIndex);
           return currentIndex;
       }
       else if (key < arr[currentIndex])
       {
            printf("%i is in the LOOWER half!\n", key);
            high = currentIndex - 1;
       }
       else
       {
            printf("%i is in the UPPER half!\n", key);
            low = currentIndex + 1;
       }
   }
   printf("%i is NOWHERE in the array!\n", key);
   return -1;
}