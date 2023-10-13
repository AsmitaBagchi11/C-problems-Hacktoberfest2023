#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, m;
    int t;
    printf("\nEnter principle:");
    scanf("%f", &p);
    printf("\nEnter rate:");
    scanf("%f", &r);
    printf("\nEnter time:");
    scanf("%d", &t);
    if (p < 0 || r < 0 || t < 0)
    {
        printf("\nEnter valid number (positive)");
    }
    else
    {
        do
        {
            m += p * r / 100;
            // Write p instead of m for compound interest
            t--;

        } while (t > 0);
    }

    printf("\nYour principle after interest is %f", p + m);
    return 0;
}