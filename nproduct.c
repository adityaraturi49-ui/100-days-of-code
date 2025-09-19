#include<stdio.h>
int main(){
    int n,i;
    long long product=1;   // use long long to avoid overflow for large n
    printf("enter value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){   // start from 2, step by 2
        product=product*i;
    }
    if(n<2){
        printf("no even numbers in range 1 to %d\n",n);
    }else{
        printf("product of even numbers from 1 to %d = %lld\n",n,product);
    }
    return 0;
}
