//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.



#include<stdio.h>
int main(){
    float a;
    printf("enter the value of a:");
    scanf("%f",&a);
     float b;
    printf("enter the value of b:");
    scanf("%f",&b);
     float c;
    printf("enter the value of c:");
    scanf("%f",&c);
    if(a==b && a==c && b==c){
        printf("equilateral triangle");
    }
    else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){
        printf("issocles triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;

}
