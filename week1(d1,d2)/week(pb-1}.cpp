/*
    Time Duration: 45 minutes.
    Problem 1: Write a C program that takes three valid side lengths of a triangle as input. You must take inputs at integer data type. Print the area of that triangle with three digits after decimal point. Do typecasting if necessary.
*/

#include <stdio.h>
#include<math.h>
int main()
{
    int length1,length2,length3;
    double S,A;
    scanf("%d %d %d",&length1,&length2,&length3);
    S=(length1+length2+length3)*.5;
    A=sqrt(S*(S-length1)*(S-length2)*(S-length3));
    printf("%.3lf\n",A);
    return 0;

}
