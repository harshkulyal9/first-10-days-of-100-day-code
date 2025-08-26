#include<stdio.h>
int main(){
    int n;
    printf("enter the value of number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("even number:");
    }
    else{
        printf("odd number");
    }
    return 0;
}