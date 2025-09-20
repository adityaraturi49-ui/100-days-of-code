#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,digit,count=0;
    double sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum+=pow(digit,count);
        temp=temp/10;
    }
    if((int)sum==n){
        printf("armstrong\n");
    }else{
        printf("not armstrong\n");
    }
    return 0;
}