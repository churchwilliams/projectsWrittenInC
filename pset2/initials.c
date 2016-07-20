#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void PrintInitials();

int main(void)
{
    PrintInitials();
}

void PrintInitials()
{
    printf("What's your FULL name?\n");
    
    string fullName = GetString();
    
    printf("%c\n", toupper(fullName[0]));
    
    for (int i = 0; i < strlen(fullName); i++)
        {
            if (fullName[i] == ' ')
              { 
                  printf("%c\n", toupper(fullName[i + 1]));
              }
        }
}