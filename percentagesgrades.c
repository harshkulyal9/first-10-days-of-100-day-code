#include<stdio.h>
int main(){
    int percentage;
    printf("enter the percentage:");
    scanf("%d",&percentage);
    if(percentage>=95){
        printf("A grade");
    }
    else if(percentage>=80 && percentage<95){
        printf("B grade");
    }
    else if(percentage>=60 && percentage<80){
        printf("c grade");
    }
    else if(percentage>=50 && percentage<60){
        printf("d grade");
    }
    else{
        printf("F grade");
    }
    return 0;
}