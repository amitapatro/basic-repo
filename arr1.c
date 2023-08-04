#include <stdio.h>
void main(){
    int a[5],i;
    printf("enter");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("array element at %d is %d\t",i,a[i]);
    }
}