#include<stdio.h>int main(){
    int a,b,null;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    //after swaping;
   null=a;
   a=b;
   b=null;
    printf("after swaping:%d,%d",a,b);
    return 0;

}
