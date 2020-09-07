/*
time duration:15min;
10. A bus can carry maximum K person at a time. How many busses are needed to carry N person?
*/
#include <stdio.h>
int main()
{
    int passenger,per_bus,bus=0;
    scanf("%d %d",&passenger,&per_bus);
    bus=passenger/per_bus;

    if(passenger%per_bus!=0){
        bus=bus+1;
        printf("%d\n",bus);
    }
    else
    {
     printf("%d\n",bus);
    }
}
