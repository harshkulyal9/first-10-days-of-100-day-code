#include<stdio.h>
int main(){
    float a;
    printf("enter the value of a:");
    scanf("%f",&a);
    float b;
    printf("enter the value of b:");
    scanf("%f",&b);
    float multiply;
    multiply=(a*b);
    printf("multiply is:%f\n",multiply);
    float divide;
    divide=a/b;
    printf("divide is:%f\n",divide);
    float sum;
    sum=a+b;
    printf("sum is:%f\n",sum);
    float subtraction;
    subtraction=a-b;
    printf("subtraction is:%f\n",subtraction);
    return 0;
}