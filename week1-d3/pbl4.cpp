/*
  time duration: 5min;
  4. Given base B and power P. find B^P.
*/
#include <stdio.h>

int main()
{
    int b,p,i,sum=1;
    scanf("%d %d",&b,&p);
    for(i=1;i<=p;i++){
        sum=sum*b;
    }
    printf("%d\n",sum);
    return 0;
}

