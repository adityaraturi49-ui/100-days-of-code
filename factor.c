#include<stdio.h>
int main(){
    int n, i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factors:");
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
