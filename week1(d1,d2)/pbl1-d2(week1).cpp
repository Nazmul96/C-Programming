/*
        Time Duration: 5 minutes
        1. Write a C program to find the maximum between two numbers.
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d\n",num1);
    }
    else{
        printf("%d\n",num2);
    }
    return 0;
}
