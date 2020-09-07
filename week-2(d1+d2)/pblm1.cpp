/*
  time duration: 5min
  1.Input N and M. Print N lines where every line contains M stars.

*/
#include <stdio.h>

int main()
{
    int n,m,row,colm;

    scanf("%d %d",&n,&m);
    for(row=0; row<n; row++){
        for(colm=0; colm<m; colm++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
