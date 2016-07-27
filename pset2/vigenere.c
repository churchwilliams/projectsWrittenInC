#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
// verifies at least one, and ONLY one ARGUMENT (the STRING key) exists

    if(argc < 2)
    {
        printf("enter a keyword, please!\n");
        return 1;
    }
    else if(argc > 2)
    {
        printf("Only ONE word allowed for your keyword!\n");
        return 1;
    }
    
// verifies that the key is a valid ALPHA STRING and not any other data type or string containing non alpha characters

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0)
            {
                printf("Only standard LETTERS are allowed in your keyword!\n");
                return 1;
            }
    }
    
    string k = argv[1];
    
    printf("%s\n", k);
    
    printf("the key represents the following values:\n");
    
    for (int i = 0; i < strlen(k); i++)
    {
        printf("%i or %c\n", k[i], k[i]);
    }
    
    // char lowerABC[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

// get PLAIN text input from user (p)
    
    string p = GetString();
    int pLength = strlen(p);
    
    int kLength = strlen(k);
    
    int shiftValue;
    for (int i = 0; i < kLength; i++)
    {
        if (islower(k[i]))
        {
            shiftValue = (k[i] - 97) % pLength;
        }
        else
        {
            shiftValue = k[i] - 65;
        }
        
        printf("%c is the %i iterator, with shift value %i\n", k[i], i ,shiftValue);
        
    }
    
    
// ENCRYPTION algorithm and output (should wrap this up in a function)
    // char upperABC[26] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
    // char lowerABC[26] = {'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g'};
    // for(int i = 0; i < pLength; i++)
    // {
    //     if (isalpha(p[i]))
    //     { 
            
    //         if (isupper(p[i]))
    //         {
    //             int finalKey = ('p[i]' + k) % 26;
            
    //             p[i] = upperABC[finalKey];
    //         }
    //         else if (islower(p[i]))
    //         {
    //             p[i] = lowerABC[finalKey];
    //         }
    //     }
            
    // }
    printf("%s\n", p);
    
    return 0;
}