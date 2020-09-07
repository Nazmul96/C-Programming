/*
   Time Duration: 5 minutes
   5. Given two numbers N and X. Find N is divisible by X or not.

*/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

