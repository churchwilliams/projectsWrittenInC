#include <cs50.h>
#include <stdio.h>

int main(void){
    string s;
    char c;
    int i;
    float f;
    double d;
    
    printf("the size of a STRING is %lu\n", sizeof(s));
    printf("the size of a CHAR is %lu\n", sizeof(c));
    printf("the size of a INT is %lu\n", sizeof(i));
    printf("the size of a FLOAT is %lu\n", sizeof(f));
    printf("the size of a DOUBLE is %lu\n", sizeof(d));
}