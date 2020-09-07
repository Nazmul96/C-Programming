/*
 time duration:15 min.
 3. Input an integer N. Print the following series: 1-2+3-4+5.....N..
*/

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2 != 0){
            sum=sum+i;
        }
        else
         {
              sum=sum-i;
         }
    }
    printf("%d\n",sum);
    return 0;

}
