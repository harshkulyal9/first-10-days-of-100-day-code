#include<stdio.h>
int main(){
    float celcius;
    printf("enter the temp in celcius:");
    scanf("%f",&celcius);
    float fahrenheit;
    fahrenheit=(9*celcius)/5+32;
    printf("the fahrenheit is :%f",fahrenheit);
    return 0;
}