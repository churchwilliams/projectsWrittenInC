#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int counter = 0;
    
    string k = "bacon";
    string p = "meet me at the park at eleven am";
    
    //char upperABC[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   // char upperABC[26] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
   // char lowerABC[26] = {'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g'};
    
    int kLength = strlen(k);
    int pLength = strlen(p);
    
    char pArray[pLength];
    
    for (int i = 0; i < pLength; i++)
    {
        if(isalpha(p[i]))
        {
            int finalKey = (p[i] + k[counter]);
            
            int shiftValue = (finalKey - p[i]) % 97; //gets shift value between 0 - 25 for LOWERCASE letters
            
            int newAscii = p[i] + shiftValue;
            
            if (newAscii > 122)
            {
                newAscii = (newAscii - 122) + 96;
            }
            
            printf("the shiftValue is %i. new letter is %c\n", shiftValue, newAscii);
            
            
            pArray[i] = newAscii;  // causes SEGMENTATION fault for some reason! Everything else seems to be working fine though!
            
            counter = (counter + 1) % kLength;
            
            // if (isupper(p[i]))
            // {
            //     p[i] = upperABC[finalKey];
            //     printf("%c is new letter\n", p[i]);
            //     counter = (counter + 1) % kLength;
            // }
            // else if (islower(p[i]))
            // {
            //     p[i] = lowerABC[finalKey];
            //     printf("%c is new letter\n", p[i]);
            //     counter = (counter + 1) % kLength;
                
            // }
        }
        else
        {
            printf("not a letter!\n");
        }
    }
    printf("%s\n", p);
}