#include<stdio.h>
void main(){
    int n,i;
    int fact=1;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("the factorial is %d",fact);
    
}