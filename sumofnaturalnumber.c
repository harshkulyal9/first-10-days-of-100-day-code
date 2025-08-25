#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}