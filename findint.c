#include<stdio.h>
int main(){
    long long num;
    int digits[10]={0};
    int digit,i,maxcount=0,mostfreq=0;
    printf("enter an integer:");
    scanf("%lld",&num);
    if(num<0) num=-num;
    while(num>0){
        digit=num%10;
        digits[digit]++;
        num/=10;
    }
    for(i=0;i<10;i++){
        if(digits[i]>maxcount){
            maxcount=digits[i];
            mostfreq=i;
        }
    }
    printf("digit that occurs most:%d (appears %d times)\n",mostfreq,maxcount);
    return 0;
}
