#include <stdio.h>
#include <cs50.h>


int GetPositive(void);
int main(void)
{
    int n;
    n=GetPositive();
    printf("Thanks for %i\n",n);
}

int GetPositive(void)
{
    int p;
    do
    {
      printf("Please enter a positive no. \n");
      p=GetInt();
    }
    while(p<1);
    return p;
}