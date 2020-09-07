#include <stdio.h>

int main()
{
   int n,i,sum=0;
   scanf("%d",&n);
   i=1;
   while(i<=n)
   {
       if(i%2 != 0){
        sum=sum+i;
       }
       else
        sum=sum-i;
        i++;
   }

   printf("%d\n",sum);
    return 0;
}
