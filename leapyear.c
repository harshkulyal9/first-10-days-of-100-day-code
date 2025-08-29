#include<stdio.h>
int main(){
    int n;
    printf("enter the year:");
    scanf("%d",&n);
   if(n%400==0){
    printf("it is a leap year");
   }
   else if(n%100==0){
    printf("not a leap year");
   }
   else if(n%4==0){
    printf("it a leap year");
   }
   else{
    printf("not a leap year");
   }
   return 0;
}
