#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,power;
    float si,ci;
    printf("p=");
    scanf("%f",&p);
    printf("r=");
    scanf("%f",&r);
    printf("t=");
    scanf("%f",&t);
    printf("si=%2f\n",p*r*t/100);
    printf("ci=%2f\n",p*pow((1+r/100.0),t)-p);
    return 0;
}