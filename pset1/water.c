#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);
int main(void) 
{
    printf("how many minutes does it take you to shower?\n");
    int minutes = GetPositiveInt();
    
    int bottles = minutes * 12;
    
    printf("you just wasted %i bottles of water, you MORON!\n", bottles);
    
}

int GetPositiveInt(void) 
    {
        int mustBePositive = GetInt();
        while (mustBePositive < 1){
            printf("you must type a POSITIVE number, smart guy!\n");
            mustBePositive = GetInt();
        }
    
        return mustBePositive;

    }

// int GetPositiveInt(void)
// {
//     int value = GetInt();
    
//     if (value < 1) 
//     {
//         printf("You must type a POSTIVE integer!");
//         GetInt();
//     }
// }