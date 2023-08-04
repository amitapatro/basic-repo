#include <stdio.h>
#include <conio.h>
void main(){
    int a,i,sum=0;
    for(i=0;i<=5;i++){
   printf("enter\n");
    scanf("%d",&a);
    if(a<0){
       continue;
    }
    sum=sum+a;
    printf("sum=%d\n",sum);
    }
}