#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s=GetString();
    int k=5;
    char arr[2]={'a'};
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>='A' && (int)s[i]<65+(26-k) )||(s[i]>='a' && (int)s[i]<97+(26-k) ) )
        {
        printf("%c",(char)((int)s[i] + k));
    }
    else if(((int)s[i]>=65+(26-k) && (int)s[i]<91 )||((int)s[i]>=97+(26-k) && (int)s[i]<123))
    {
        printf("%c",(char)(((int)s[i] - 26 + k)));
    }
    else
    {
        printf("%c",s[i]);
    }
    }
    for(int i=0;i<2;i++)
    {
    printf("%c",arr[i]);
    }
}
