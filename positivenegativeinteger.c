#include <stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n<0){
    printf("negative number");
}
if(n>0){
    printf("positive number");
}
if(n==0){
    printf("zero");
}
return 0;

}