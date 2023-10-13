#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nAll even integers between 50 to 100 are:");
    for (int i = 50; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
    }

    int i = 50;
    do
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    } while (i <= 100);

    i = 50;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }

    return 0;
}