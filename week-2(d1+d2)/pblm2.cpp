/*
   time duration:5min.
   2. Input a value N and print N lines in following way.

*/
#include <stdio.h>

int main()
{
    int n,row,colm;
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(colm=1; colm<=row; colm++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
