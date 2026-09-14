#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    a=b;
    c=b;
    a=b;
    printf("number after swaping of a and b\n");
    printf("a=%d\n",b);
    printf("b=%d",a);
    return 0;
}