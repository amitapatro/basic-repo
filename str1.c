// to print length of string
#include <stdio.h>
void main(){
    char name[30];
    int count =0;
    int i=0;
    printf("enter");
    gets(name);
  while(name[i]!='\0'){
    count++;
    i++ ;
  }
  puts(name);
  printf("%d",count);
} 