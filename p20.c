#include<stdio.h>
#include <conio.h>
void main(){
    int input,i,sum=0;
    printf("enter");
    scanf("%d",&input);

for(i=1;i<=input;i++){
    sum=sum+i;
    }
  printf("the sum of %d is %d",input,sum);
getchar();
    }