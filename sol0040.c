#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("\nEnter number:");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("\nPositive");
    }
    else if (n < 0)
    {
        printf("\nNegative");
    }
    else
    {
        printf("\nNeutral");
    }
    return 0;
}