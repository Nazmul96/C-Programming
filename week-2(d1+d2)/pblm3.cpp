/*
   time duration: 5min;
   3. Input a value N and print N lines in following way.
Example: If N=4 then,
*/
#include <stdio.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1; row<=n; row++){

        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
