#include<stdio.h>
int main()
{
     char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'
    ||ch=='A' || ch=='I' || ch=='E' || ch=='O' || ch=='U')
    {
        printf("%c is vowels",ch);
    }
    else 
    {
        printf("%c is consnant",ch);
    }
    return 0;
}