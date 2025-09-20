#include <stdio.h>

int main() {
    int a,b,temp,hcf;
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
    printf("hcf (gcd) of %d and %d is: %d\n",a,b,hcf);
    return 0;
}
