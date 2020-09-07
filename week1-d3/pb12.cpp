#include <stdio.h>

int main()
{
    int i,n,sum;
    scanf("%d",&n);
    i=1;
    while(i<=10){
        sum=n*i;
        printf("%d  X  %d= %d\n",n,i,sum);
        i++;
    }
    return 0;
}
