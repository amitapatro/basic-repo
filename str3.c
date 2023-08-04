// to concatenate string using library function
#include<stdio.h>
#include <string.h>
void main(){
char s1[35];
char s2[20];
printf("enter");
scanf("%s",s1);
scanf("%s",s2);
strcat(s1,s2);
printf("%s",s1);
printf("have a good day!");
}