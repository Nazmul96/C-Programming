/*
    time duration:10min;
    8. Write a C program to find whether a given year is a leap year or not.
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
         printf("%d is a leap year.\n",n);
    }
    else{
        printf("%d is not a leap year\n",n);
    }
}

