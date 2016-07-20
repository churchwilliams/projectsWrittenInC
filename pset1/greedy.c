#include <cs50.h>
#include <stdio.h>
#include <math.h>

/*
only accept NON negative values, including 0

use round() during your conversion from float to int in order to round your float to int so as to avoid imprecision errors

round() will give you a value of data type DOUBLE that you can then cast to an INT
*/

float GetPositiveFloat(void);
int GreedyAlgorithm(int change);

int main(void)
{
    printf("how much change is owed?\n");
    float change = GetPositiveFloat();
    
    int intChange = round(change * 100);

    // printf("you typed %i\n", intChange);
    
    GreedyAlgorithm(intChange);
}




float GetPositiveFloat(void)
{
    float usrFloat = GetFloat();
    
    while (usrFloat < 0) {
        printf("Please enter a non-negative amount\n");
        usrFloat = GetFloat();
    }
    
    return usrFloat;
}

int GreedyAlgorithm(int change)
{
    int decrementingChange = change;
    
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    
    while (decrementingChange > 24)
    {
        quarters++;
        decrementingChange = decrementingChange - 25;
    }
    
    while (decrementingChange > 9)
    {
        dimes++;
        decrementingChange = decrementingChange - 10;
    }
    
    while (decrementingChange > 4)
    {
        nickles++;
        decrementingChange = decrementingChange - 5;
    }
    
    while (decrementingChange < 5 && decrementingChange > 0)
    {
        pennies++;
        decrementingChange = decrementingChange - 1;
    }
    
    int totalCoins = quarters + dimes + nickles + pennies;
    
    printf("You'll need %i total coins!\n", totalCoins);
    printf("quarters: %i\n", quarters);
    printf("dimes: %i\n", dimes);
    printf("nickles: %i\n", nickles);
    printf("pennies: %i\n", pennies);
    
    return totalCoins;
}