#include<stdio.h>
int main(){
int n,d,p=1,f=0;
scanf("%d",&n);
while(n!=0){
d=n%10;
if(d%2!=0){p*=d;f=1;}
n/=10;
}
if(f)printf("%d\n",p);
else printf("0\n");
return 0;
}
