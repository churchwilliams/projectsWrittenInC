#include <cs50.h>
#include <stdio.h>

void PrintName(string name);

int main(void){
    printf("what is your name?\n");
    string name = GetString();
    PrintName(name);
}

void PrintName(string name){
    printf("well hello, %s!\n", name);
}