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
    
    printf("the keyword is : %s\n", k);
    
// get PLAIN text input from user (p)
    
    string p = GetString();
    
    printf("the plaintext is : %s\n", p);
    
// Extract keyword VALUES

    //97 - 122 ... lowercase
    
// dynamically create keyArray

    int keyLength = strlen(k);
    
    // int keyArray[keyLength];

    // for (int i = 0; i < keyLength - 1; i++)
    // {
    //     keyArray[i] = i + 1;
    // }
    
    // keyArray[keyLength - 1] = 0;
    
    int pLength = strlen(p);
    
    // char upperABC[26] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
    // char lowerABC[26] = {'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g'};
    
    //char lowerABC[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
    
    for (int i = 0; i < pLength; i++)
    {
        int charInt = p[i];
        int keyPosition = charInt % keyLength;
        int keyValue = k[keyPosition];
        
        int shiftValue = k[i] - p[i];
        
        char newChar = p[i] + shiftValue;
        
        printf("%c = %i in the keyArray\n", p[i], k[i]);
        printf("keyValue is %i\n", keyValue);
        printf("corresponding letter in key is %c\n", k[keyValue]);
        printf("new char is %c\n", newChar);
        
            // printf("%c is ascii #%i\n", p[i], p[i]);
            // printf("%c has a keyPosition of %i because %i modulo %i is %i\n", p[i], keyPosition, p[i], keyLength, keyPosition);
            // printf("the keyPosition %i corresponds with keyValue %i in keyArray\n", keyPosition, keyValue );
            // printf("%c now equals %c\n", p[i], newChar);
            // printf("\n");
            
            // printf("%i\n", keyArray[0]);
            // printf("%i\n", keyArray[keyLength -1]);
    }
    // printf("%s\n", p);
}