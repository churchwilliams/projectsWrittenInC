#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int n = 10;
    int value = 7;
    int start = 0;
    
    
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
            //break off the FIRST half of the array.
            printf("it's in the FIRST half\n");
            n = n/2;
        }
        else if (value > arr[n/2])
        {
            printf("it's in the SECOND half\n");
            start = n/2
            n = n/2;
        }
    }
    
    
    
    
    
}