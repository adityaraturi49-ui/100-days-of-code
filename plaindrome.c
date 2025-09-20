#include<stdio.h>
int main(){
    int n, temp, rev=0, digit;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(n==rev){
        printf("palindrome\n");
    }else{
        printf("not palindrome\n");
    }
    return 0;
}
