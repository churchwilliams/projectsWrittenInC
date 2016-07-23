#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
// verifies at least one, and ONLY one ARGUMENT (the caesar key) exists

    if(argc < 2)
    {
        printf("enter a key value, please!\n");
        return 1;
    }
    else if(argc > 2)
    {
        printf("enter ONLY one key value!\n");
        return 1;
    }
    
// verifies that the key is a valid INTEGER and not any other character

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
            {
                printf("INTEGERS only please! No other characters allowed!\n");
                return 1;
            }
    }
    
    int k = atoi(argv[1]);
    
    
// get PLAIN text input from user (p)
    
    string p = GetString();
    
// ENCRYPTION algorithm and output (should wrap this up in a function)
    
    int n = strlen(p);
    char upperABC[26] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
    char lowerABC[26] = {'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g'};
    for(int i = 0; i < n; i++)
    {
        if (isalpha(p[i]))
        { 
            int finalKey = (p[i] + k) % 26;
            
            if (isupper(p[i]))
            {
                p[i] = upperABC[finalKey];
            }
            else if (islower(p[i]))
            {
                p[i] = lowerABC[finalKey];
            }
        }
            
    }
    printf("%s\n", p);
    
    return 0;
}