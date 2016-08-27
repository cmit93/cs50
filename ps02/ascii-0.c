#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    for(int i=65;i<=95+26;i++)
    printf("%c is %i \n",(char)i,i);
}