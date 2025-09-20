#include<stdio.h>
int main(){
    int n,binary[32],i=0;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==0){
        printf("binary=0\n");
        return 0;
    }
    while(n>0){
        binary[i]=n%2;  // store remainder (bit)
        n=n/2
