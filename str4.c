// to concatenate strings using logic
#include<stdio.h>
#include<string.h>
void main(){
    int len1;
    int len2;
    int i;
    char s1[20];
    char s2[20];
    len1=strlen(s1);
    len2=strlen(s2);
    printf("enter");
    gets(s1);
    scanf("%s",s2);
    for(i=0;i<=len2;i++){
     s1[len1+i]=s2[i];
    }
    printf("%s",s1);

}