#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer");
    scanf("%d",&n);

    if (n>0)
    {
       printf("positive");
    }
    else if(n==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
}