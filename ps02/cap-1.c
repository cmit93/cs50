#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
        int l;
        string s=GetString();
        l=strlen(s);
        printf("%i",l);
        for(int i=0;i<=strlen(s);i++)
        {
        printf("%c",toupper(s[i]));

}
}
    
    