#include<stdio.h>
#include <conio.h>
void main(){
    int input,i,fact=1;
    printf("enter");
    scanf("%d",&input);

for(i=1;i<=input;i++){
    fact=fact*i;
    if(input<0){
        printf("no entry");
    }
}
    printf("the factorial of %d is %d",input,fact);
getchar();
    }