/* time duration: 5min
6. Given N. print the "namta" of N.
*/
#include <stdio.h>

int main()
{
    int n,i,sum;
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        sum=n*i;
        printf("%d  X  %d= %d\n",n,i,sum);
    }
    return 0;
}
