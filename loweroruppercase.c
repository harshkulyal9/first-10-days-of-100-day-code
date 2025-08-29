#include<stdio.h>
int main(){
    char ch;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    if( ch >='A'&& ch <='Z'){
        printf("upper case");
    }
    else if(ch >='a' && ch<='z'){
        printf("lower case");
    }
    else if(ch >=0 && ch<=9){
        printf("digit");
    }
    else{
    printf("special number");
    }
    return 0;

}