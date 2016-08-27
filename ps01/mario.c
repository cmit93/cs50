#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    printf("Enter the height of pyramid \n");
    do
    {
        n=GetInt();
    }
    while(n<0 && n>=23);
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        printf("#");
}
printf("\n");
}
}



