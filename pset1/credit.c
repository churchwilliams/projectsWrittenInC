#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("your CC number? \n");
    long long ccNum = GetLongLong();
    
    string numString = GetString(ccNum);
    
    // printf("%lld \n", ccNum[0]);
}