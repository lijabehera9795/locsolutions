#include <stdio.h>
void main()
{
    int a,b,i,s;
    printf("the following operations to be done \n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulo\n");
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    printf("enter the operation to be followed\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:s=a+b;
        printf("the added value is %d",s);
        break;
        case 2:s=a-b;
        printf("the subtracted value is %d",s);
        break;
        case 3:s=a*b;
        printf("the multiplied value is %d",s);
        break;
        case 4:s=(float)a/b;
        printf("the divided value is %d",s);
        break;
        case 5:s=a%b;
        printf("the modulus value is %d",s);
        break;
    }
}

