#include <stdio.h>
#include <string.h>
int main(){
char str1[100],str2[100];
int count1[26]={0},count2[26]={0};
int i;
printf("enter first string: ");
fgets(str1,100,stdin);
str1[strcspn(str1,"\n")]='\0';
printf("enter second string: ");
fgets(str2,100,stdin);
str2[strcspn(str2,"\n")]='\0';
for(i=0;str1[i]!='\0';i++){
if(str1[i]>='a'&&str1[i]<='z')
count1[str1[i]-'a']++;
}
for(i=0;str2[i]!='\0';i++){
if(str2[i]>='a'&&str2[i]<='z')
count2[str2[i]-'a']++;
}
for(i=0;i<26;i++){
if(count1[i]!=count2[i]){
printf("not anagrams\n");
return 0;
}
}
printf("anagrams\n");
return 0;
}
