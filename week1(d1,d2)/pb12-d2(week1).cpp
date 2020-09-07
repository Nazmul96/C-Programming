/*time duration:5min;
12. Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.*/

#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("'%c' is uppercase alphabet.\n",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("'%c' is lowercase alphabet.\n",ch);
    }
    else if(ch>='0' && ch<='9'){
         printf("'%c' is a digit.\n",ch);
    }
    else{
        printf("'%c' is not an alphabet.\n",ch);
    }
    return 0;
}

