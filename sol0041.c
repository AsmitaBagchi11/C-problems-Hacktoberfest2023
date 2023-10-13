#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("\nEnter your age:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nYes you can vote!!");
    }
    else
    {
        printf("\nWait till you turn 18");
    }
    return 0;
}