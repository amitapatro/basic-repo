// with arguements with return type
#include <stdio.h>
int sum(int,int);//declare
void main(){
    int a,b; 
    printf("enter");
    scanf("%d%d",&a,&b);
    int c= sum(a,b);//call
    printf("sum=%d",c);
}
int sum(int x,int y){
int sum =0;
sum=x+y;
return sum;
}


