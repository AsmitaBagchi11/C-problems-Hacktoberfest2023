#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3],t;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    t = a[0];
    for (int i = 0; i < 3; i++)
    {
        if(t<a[i]){
            t = a[i];
        }
    }

    printf("\nThe greatest of three is %d",t);


    return 0;
}