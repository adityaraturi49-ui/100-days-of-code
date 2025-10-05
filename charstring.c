#include<stdio.h>
int main(){
char str[200];
int i,spaces=0,digits=0,special=0;
printf("enter a string: ");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++){
if(str[i]==' ')
spaces++;
else if(str[i]>='0'&&str[i]<='9')
digits++;
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='\n')
continue;
else
special++;
}
printf("spaces: %d\n",spaces);
printf("digits: %d\n",digits);
printf("special characters: %d",special);
return 0;
}
