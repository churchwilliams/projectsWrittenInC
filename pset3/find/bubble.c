#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int values[8] = {5,3,15,206,19,6500,3,33};
    int altInt = 0;
    
    for (int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(values[j] > values[j+1])
            {
                altInt = values[j];
                values[j] = values[j+1];
                values[j+1] = altInt;
            }
        }
    }
    
    for(int i = 0; i < 8; i++)
    {
        printf("element %i is %i\n", i ,values[i]);
    }
}