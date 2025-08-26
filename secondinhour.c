#include<stdio.h>
int main(){
    int seconds,secs;
    printf("enter seconds:");
    scanf("%d",&seconds);
    int hour;
    hour=seconds/3600;
    seconds=seconds%3600;
    int minutes;
    minutes=seconds/60;
    secs=seconds%60;
    printf("%d:%d:%d",hour,minutes,secs);
    return 0;



}
