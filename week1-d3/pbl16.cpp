
/* time duration: 15min
16. Given a numbe N, find smallest number which is  dividible by 3 and greater than N.
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(true)
    {
        n++;
        if(n%3==0){
            printf("%d\n",n);
            break;
        }

    }
    return 0;
}
