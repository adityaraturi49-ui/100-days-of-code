#include<stdio.h>
int main(){
int n,temp,d,sum=0,f,i;
printf("enter a number:");
scanf("%d",&n);
temp=n;
while(n>0){
d=n%10;
f=1;
for(i=1;i<=d;i++){
f=f*i;
}
sum+=f;
n=n/10;
}
if(sum==temp){
printf("%d is a strong number.\n",temp);
}else{
printf("%d is not a strong number.\n",temp);
}
return 0;
}
