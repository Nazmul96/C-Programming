/*
   time duration: 10min
   8. Given an array, Find all possible pairs.
*/
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d %d, ",ara[i],ara[j]);
        }
    }

    return 0;
}
