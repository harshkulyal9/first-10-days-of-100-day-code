#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:");
    scanf("%d",&b);
    int c;
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is largest");
    }
    else if(b>a && b>c){
        printf("b is largest"); 
    }else{
        printf("c is largest");
    } return 0;
}
