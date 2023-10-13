#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nPrinting 1-100 increasing order using for loop: ");
    for (int i = 1; i <= 100; i++)
    {
        printf("\n%d", i);
    }

    printf("\nPrinting 1-100 decreasing order using for loop: ");
    for (int i = 100; i > 0; i--)
    {
        printf("\n%d", i);
    }

    int j = 1;

    printf("\nPrinting 1-100 increasing order using while loop: ");
    while (j <= 100)
    {
        printf("\n%d", j);
        j++;
    }

    printf("\nPrinting 1-100 decreasing order using while loop: ");
    while (j > 1)
    {
        j--;
        printf("\n%d", j);
    }

    printf("\nPrinting 1-100 increasing order using do-while loop: ");
    do
    {
        printf("\n%d", j);
        j++;
    } while (j <= 100);

    printf("\nPrinting 1-100 decreasing order using do-while loop: ");
    do
    {
        j--;
        printf("\n%d", j);
    } while (j > 1);

    return 0;
}