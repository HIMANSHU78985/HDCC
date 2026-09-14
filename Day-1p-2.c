#include<stdio.h>
int main()
{
    float a,b,sum,difference,product,quotient;
    printf("first numbers are: \n");
    scanf("%f",&a);
    printf("second numbers are: \n");
    scanf("%f",&b);
    sum=a+b;
    printf("sum=%f\n",sum);
    difference=a-b;
    printf("difference=%f\n",difference);
    product=a*b;
    printf("product=%f\n",product);
    if(b!=0)
    {
        quotient=a/b;
        printf("quotient=%2f\n",quotient);
    }
    else
    {
        printf("invalide");
    }
    return 0;
}