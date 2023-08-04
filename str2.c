// to print length of string
#include <stdio.h>
#include <string.h>
void main(){
    char name[30];
    int count =0;
    
    printf("enter");
    gets(name);
    count=strlen(name);
    
    
  
  puts(name);
  printf("%d",count);
} 