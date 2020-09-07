#include <stdio.h>

int main()
{
    int b,p,i,sum=1;
    scanf("%d %d",&b,&p);
    i=1;
    while(i<=p){
        sum=sum*b;
        i++;
    }
    printf("%d\n",sum);

    return 0;
}
