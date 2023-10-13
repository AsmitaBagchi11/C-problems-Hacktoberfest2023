#include <stdio.h>
#include <conio.h>
int main()
{
    int sumi = 0;
    for (int i = 100; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            sumi += i;
        }
    }
    printf("\nThe sum of all integers divisible by 7 and between 100 to 200 is %d", sumi);
    return 0;
}