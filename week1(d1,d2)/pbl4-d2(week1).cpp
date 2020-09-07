/*
   Time Duration: 10 minutes
   4. Write a C program to check whether a given integer is odd or even.

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is an even integer\n",n);
    }
    else
    {
        printf("%d is an odd integer\n",n);
    }
    return 0;
}
