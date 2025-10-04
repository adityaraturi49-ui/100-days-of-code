#include<stdio.h>
int main(){
char str[100];
printf("enter a string:");
fgets(str,100,stdin);
for(int i=0;str[i]!='\0';i++){
if(str[i]>='a'&&str[i]<='z')
str[i]=str[i]-32;
}
printf("uppercase string:%s",str);
return 0;
}
