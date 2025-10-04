#include<stdio.h>
#include<string.h>
int main(){
char str[100],rev[100];
int len,i;
printf("enter a string:");
fgets(str,100,stdin);
len=strlen(str);
if(str[len-1]=='\n')len--;
for(i=0;i<len;i++){
rev[i]=str[len-1-i];
}
rev[len]='\0';
printf("reversed string:%s",rev);
return 0;
}
