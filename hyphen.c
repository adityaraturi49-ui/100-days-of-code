#include<stdio.h>
int main(){
char str[200];
int i;
printf("enter a string: ");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++){
if(str[i]==' ')
str[i]='-';
}
printf("modified string: %s",str);
return 0;
}
