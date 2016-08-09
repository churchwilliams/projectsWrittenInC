#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int n = 10;
    int value = 5;
    
    
    while (n != 1)
    {
        printf("halfway point = %i\n", arr[n/2]);
        if (value == arr[n/2])
        {
            printf("%i is found in the array at position %i\n", value, arr[n/2]);
            return 0;
        }
        else if (value < arr[n/2])
        {
            n = n/2;
            
        }
        else if (value > arr[n/2])
        {
            n = n/2;
        }
    }
    
    
    
    
    
}