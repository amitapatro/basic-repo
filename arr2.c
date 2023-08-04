#include <stdio.h>
void main(){
    int a[3+2],i;
    printf("enter");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--){
        printf("array element at %d is %d\n",i,a[i]);
    }
}