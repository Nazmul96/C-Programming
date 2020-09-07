/* time duration: 20min
17. Given N, find X and A where N = X*2^A.
*/

#include<stdio.h>

int main()
{
    int n,x,A=0;
    scanf("%d",&n);
    while(n%2==0){
            n=n/2;
            A++;

    }

    printf("%d %d\n",n,A);
    return 0;

}

