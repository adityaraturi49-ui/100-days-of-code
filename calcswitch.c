#include<stdio.h>
int main(){
int a,b;
char op;
printf("enter first number: ");
scanf("%d",&a);
printf("enter operator (+,-,*,/,%): ");
scanf(" %c",&op);
printf("enter second number: ");
scanf("%d",&b);
switch(op){
case '+':printf("result=%d\n",a+b);break;
case '-':printf("result=%d\n",a-b);break;
case '*':printf("result=%d\n",a*b);break;
case '/':if(b!=0){printf("result=%d\n",a/b);}else{printf("error: division by zero not allowed.\n");}break;
case '%':if(b!=0){printf("result=%d\n",a%b);}else{printf("error: modulo by zero not allowed.\n");}break;
default:printf("invalid operator.\n");
}
return 0;
}
