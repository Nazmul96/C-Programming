/*
  time duration: 5min;
  5. Given N. Find N!.
*/

#include<stdio.h>

int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum=sum*i;
    }
    printf("%d\n",sum);

    return 0;
}
