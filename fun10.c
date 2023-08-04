//with arguements without return type
#include<stdio.h>
void check(int);//declare
void main(){
    int a;
    printf("enter");
    scanf("%d",&a);
check(  a);//call//defination
}
void check(int x){
    if (x%2==0)
    printf("even");
    else 
    printf("odd");

}
