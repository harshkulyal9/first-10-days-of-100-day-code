#include<stdio.h>
#include<math.h>
int main(){
    float principle,rate,time,amount;
    printf("enter the value of principle:");
    scanf("%f",&principle);
    printf("enter the value of rate:");
    scanf("%f",&rate); 
    printf("enter the value of time:");
    scanf("%f",&time); 
    float si ;
    si= (principle*rate*time)/100;
    printf("the simple interest is :%f\n",si);   
    amount=principle*pow(1+rate/100,time);
    float compoundinterest;
    compoundinterest=amount-principle;
    printf("the compound interest is :%f",compoundinterest);
    return 0;
}