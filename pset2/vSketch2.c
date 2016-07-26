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
    
//loop through stuff

    int pLength = strlen(p);
    int keyLength = strlen(k);
    
    printf("KEY length is %i\n", keyLength);
    printf("STRING length is %i\n", pLength);
    printf("\n");
    
    printf("%s\n", p);
}