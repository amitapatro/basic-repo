// swap without using third variable
#include <stdio.h>
void swap(int*,int*);
void main(){
   int a=2,b=5;
   swap(&a,&b);
   printf("a=%d\n,b=%d",a,b);
   
}
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}