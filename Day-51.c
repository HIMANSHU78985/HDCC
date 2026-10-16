#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target:");
    scanf("%d",&target);
    int first=firstocc(arr,n,target);
    int last=lastocc(arr,n,target);
    printf("first occurrence of %d is at index %d\n",target,first);
    printf("last occurrence of %d is at index %d\n",target,last);
    return 0;
}

int firstocc(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int lastocc(int arr[],int n,int target)
{
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}