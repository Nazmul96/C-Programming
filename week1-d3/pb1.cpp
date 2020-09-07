/*
   time duration: 5min.
  1. Input an integer N. Print N, N-1, ......3, 2, 1.
*/
#include<stdio.h>

int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=n; i>0; i--){
    printf("%d ",i);
   }
   return 0;
}
