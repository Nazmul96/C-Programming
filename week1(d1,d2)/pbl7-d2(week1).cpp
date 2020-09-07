/*
    time duration:10min;
    7. Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
*/
#include<stdio.h>

int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2&&s1==s3&&s2==s3)
    {
        printf("This is an equilateral triangle\n");
    }
    else if(s1==s2||s1==s3||s2==s3)
    {
         printf("This is an isosceles triangle\n");
    }
    else
    {
        printf("This is an scalene triangle\n");
    }
    return 0;
}
