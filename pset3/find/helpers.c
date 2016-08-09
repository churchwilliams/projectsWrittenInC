/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a BINARY search algorithm

    int low = 0, high = n - 1, currentIndex;
    
    while (low <= high)
   {
       currentIndex = (high + low) /2;
       if (value == values[currentIndex])
       {     
           printf("%i is in position arr[%i]!\n", value, currentIndex);
           return 1;
       }
       else if (value < values[currentIndex])
       {
            printf("%i is in the LOOWER half!\n", value);
            high = currentIndex - 1;
       }
       else
       {
            printf("%i is in the UPPER half!\n", value);
            low = currentIndex + 1;
       }
   }
   return 0;


}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int altInt = 0;
    
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(values[j] > values[j+1])
            {
                altInt = values[j];
                values[j] = values[j+1];
                values[j+1] = altInt;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("sorted element %i is %i\n", i ,values[i]);
    }
    return;
}