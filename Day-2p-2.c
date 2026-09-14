#include<stdio.h>
int main()
{
    int r;
    float pi=3.14;
    printf("enter the radius\n");
    scanf("%d",&r);
    printf("the area of circle is %d\n",pi*r*r);
    printf("the circumferences of cicrle is %d\n",2*pi*r);
    return 0;
}