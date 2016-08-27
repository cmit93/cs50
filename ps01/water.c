#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x,y;
    x=GetInt();
    printf("minutes: %i \n",x);
    y=x*1.5*128/16;
    printf("bottles : %i ",y);
}