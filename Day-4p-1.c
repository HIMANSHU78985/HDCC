#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("value after swaping\n");
    printf("a=%d\n",b);
    printf("b=%d\n",a);
    return 0;
}