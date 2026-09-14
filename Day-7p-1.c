#include<stdio.h>
int main()
{
    int year,leap;
    printf("year=");
    scanf("%d",&year);
      leap= (year/4==0 )||(( year/100!=0) && year/400==0);
      switch(leap)
      {
        case 1:
     printf("%d is leap year",year);
     break;
     case 0:
     printf("%d is not leap year",year);
    }
    
    return 0;
}