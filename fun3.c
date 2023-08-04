#include<stdio.h>
int sub(){
    int a,b,sub=0;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("the sub is %d\n",sub);
}
int sum(){
    int a,b,sum=0;
    printf("enter the number:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is %d\n",sum);
}
void main()
{
sum();
printf("hello\n");
sub();
sub();
}