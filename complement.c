#include<stdio.h>
int main(){
char b[100];
int i;
scanf("%s",b);
for(i=0;b[i]!='\0';i++){
if(b[i]=='0')b[i]='1';
else if(b[i]=='1')b[i]='0';
}
printf("%s\n",b);
return 0;
}
