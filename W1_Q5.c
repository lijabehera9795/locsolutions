#include <stdio.h>
void main()
{
int r,a,c,d;
printf("enter the radius\n");
scanf("%d",&r);
d=r*2;
c=(float)2*3.14*r;
a=3.14*r*r;
printf("diameter=%d\n",d);
printf("circumference=%d\n",c);
printf("area=%d\n",a);
}