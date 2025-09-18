#include <stdio.h>
int main() {
    float cp,sp,amount,percentage;
    printf("enter cost price: ");
    scanf("%f",&cp);
    printf("enter selling price: ");
    scanf("%f",&sp);
    if(sp>cp){
        amount=sp-cp;
        percentage=(amount/cp)*100;
        printf("profit=%.2f\n",amount);
        printf("profit percentage=%.2f%%\n",percentage);
    } else if(cp>sp){
        amount=cp-sp;
        percentage=(amount/cp)*100;
        printf("loss=%.2f\n",amount);
        printf("loss percentage=%.2f%%\n",percentage);
    } else {
        printf("no profit, no loss\n");
    }
    return 0;
}
