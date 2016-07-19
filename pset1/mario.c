#include <cs50.h>
#include <stdio.h>

/* 
    This program:
<<<<<<< HEAD
    1) PROMPTS user for a positive integer (n) which must be less than 24
=======
    1) PPROMPTS user for a positive integer (n) which must be less than 24
>>>>>>> 4268297cb3011eceb589e608c02a3e2bb82604f4
    2) CONSTRUCTS a half-pyramid with n rows composed of hash symbols
    3) PRINTS said half-pyramid to the termianl
    
    written by Eric Williams
*/

//Custom functions
int GetPositiveInt(void);
void PrintPyramid(int n);


int main(void)
{

//PROMPT user for height of pyramid
    printf("height?\n");
    int n = GetPositiveInt();
    
    while (n > 23)
    {
        printf("Integer must be SMALLER than 24\n");
        n = GetPositiveInt();
    }

//CONSTRUCT and PRINT pyramid according to user's input
    PrintPyramid(n);
    
    
}

//validates that user entered a POSITIVE int
int GetPositiveInt(void)
{
    int n = GetInt();
    
    while (n < 1)
    {
        printf("Integer must be POSITIVE\n");
        n = GetInt();
    }
    
    return n;
    
}

//The MEAT of the whole program
void PrintPyramid(int n)
{
    int PyramidRow = n;         //Decrements the ROW of the pyramid with each pass
    for(int j = 0; j < n; j++)
    {
        int SpaceCounter = 0;   //Decrements one total space each time the PyramidRow variable decrements
        for(int i = 0; i < PyramidRow - 1; i++)
            {
                printf(" ");
                SpaceCounter++;
            }
        
        for(int i = SpaceCounter; i <= n; i++)
            {
                printf("#");
            }
        
        
        printf("\n");
        PyramidRow--;
    }
}
