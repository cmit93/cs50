#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s=GetString();
    for(int i=0;i<strlen(s);i++)
    if(s[i-1]==' '||s[i]==s[0])
    {
    printf("%c",toupper(s[i]));
}
}