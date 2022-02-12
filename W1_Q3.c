#include <stdio.h>
void main()
{
    int n;
    printf("enter a value\n");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:printf("number is even\n");
        break;
        case 1:printf("number is odd\n");
        break;
}
}