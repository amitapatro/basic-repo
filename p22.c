#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,result=1,i;
    printf("enter:");
   scanf("%d",&a);
   printf("enter:");
    scanf("%d",&b); 
    for(i=1;i<=b;i++)//a=2/b=3
    result=result*a;
    printf("%d power %d=%d",a,b,result);
    getch();
}