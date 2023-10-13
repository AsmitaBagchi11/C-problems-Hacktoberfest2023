#include <stdio.h>

int main()
{
    char ch, v;
    int i;
    float f;
    printf("\nEnter which type of data you want:\nc->character,i->integer,f->float: ");
    scanf("%c",&ch);
    fflush(stdin);
    switch (ch)
    {
    case 'c':
        printf("\nEnter your value: ");
        scanf("%c",&v);
        fflush(stdin);
        printf("\n%c",v);
        break;
    
    case 'i':
        printf("\nEnter your value: ");
        scanf("%d",&i);
        printf("\n%d",i);
        break;
    
    case 'f':
        printf("\nEnter your value: ");
        scanf("%f",&f);
        printf("\n%f",f);
        break;
    
    default:
        break;
    }
    return 0;
}