#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s=GetString();
    int k=0;
    int n;
    char p[50];
    char arr[]={'b','a','c','o','n'};
    for(int i=0;i<strlen(s);i++)
    {
        if(k<5)
        {
        if(s[i]!=' ')
        {
            p[i]=arr[k];
            k++;
        }
                else 
        {
            p[i]=s[i];
        }
        }
        else
        {
            if(k==5 && s[i]==' ')
            {
                p[i]=s[i];
                k=0;
            }
            else
            {
            p[i]=arr[k];
            k=0;
            k++;
            }
        }
        }
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
        {
            n=(int)p[i]-97;
        }
        
        if((s[i]>='A' && (int)s[i]<65+(26-n) )||(s[i]>='a' && (int)s[i]<97+(26-n) ) )
        {
        printf("%c",(char)((int)s[i] + n));
    }
    else if(((int)s[i]>=65+(26-n) && (int)s[i]<91 )||((int)s[i]>=97+(26-n) && (int)s[i]<123))
    {
        printf("%c",(char)(((int)s[i] - 26 + n)));
    }
    else
    {
        printf("%c",s[i]);
    }
}
}
