/*
    time duration:20min;
    6. Write a C program to find the third maximum between four numbers.
*/
#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    if(num1>num2 && num1<num3 && num1<num4){
        printf("%d\n",num1);
    }
    else if(num2>num1 && num2<num3 && num2<num4){
         printf("%d\n",num2);
    }
    else if(num3>num1 && num3<num2 && num3<num4){
         printf("%d\n",num3);
    }
    else{
         printf("%d\n",num4);
    }
    return 0;
}
