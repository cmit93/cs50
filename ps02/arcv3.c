#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    for(int i=0;i<argc;i++)
    {
        for(int j=0;j<strlen(argv[i]);j++)
        {
    printf("%c\n",argv[i][j]);
}
}
}
