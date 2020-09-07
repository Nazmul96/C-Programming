/*
time duration:10min;
9. Find the absolute difference between the two numbers.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,difference;
    scanf("%d %d",&x,&y);
    difference=abs(x-y);
    printf("%d\n",difference);

    return 0;
}
