#include<stdio.h>
int main(){
    int n,i;
    long long fact=1; // factorial grows fast, so use long long
    printf("enter a positive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("factorial of negative number doesn't exist.\n");
    }else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("factorial of %d = %lld\n",n,fact);
    }
    return 0;
}
