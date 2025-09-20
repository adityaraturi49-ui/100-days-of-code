#include <stdio.h>

int main() {
    int a,b,hcf,temp,lcm;
    printf("enter two positive integers: ");
    scanf("%d %d",&a,&b);
    int x=a;
    int y=b;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    hcf=x;
    lcm=(a*b)/hcf;
    printf("lcm of %d and %d is: %d\n",a,b,lcm);
    return 0;
}
