#include<stdio.h>
int main(){
int number1;
printf("enter the value of number 1:");
scanf("%d",&number1);
int number2;
printf("enter the value of number 2:");
scanf("%d",&number2);
number1=number1*number2;
number2=number1/number2;
number1=number1/number2;
printf("%d\n%d",number1,number2);
return 0;

}
