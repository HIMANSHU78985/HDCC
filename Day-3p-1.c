#include<stdio.h>
int main()
{
    float celsius,fehrenheit;
    printf("enter the temperature(in celsius) \n");
    scanf("%f",&celsius);
    printf("the temperature in %f(in fehrenheit)",celsius*9/5+32);
    return 0;
}