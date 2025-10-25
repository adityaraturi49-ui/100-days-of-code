#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int i;
printf("enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++){
if(islower(str[i]))
str[i]=toupper(str[i]);
else if(isupper(str[i]))
str[i]=tolower(str[i]);
}
printf("toggled string: %s",str);
return 0;
}
