#include <cs50.h>
#include <stdio.h>


void mk(string name)
{
    printf("Hello, %s \n",name);
}

int main(void)
{
    printf("Your Name : \n")-;
    string s=GetString();
    mk(s);
}


