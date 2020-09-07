/*
time duration:10min
14. Input an integer N. Revrese the integer N.
*/

#include<stdio.h>

int main()
{
    int n,S=0,x;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        S=S*10+x;
        n=n/10;
    }
    printf("%d\n",S);

    return 0;
}

