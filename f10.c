#include<stdio.h>
int fact(int);
int main()
{
    int num;
    int factorial;
    printf("enter");
    scanf("%d",&num);
    factorial=fact(num);
    printf("the factorial of %d is %d",num,fact);
    return 0;
}
int fact( int num)
{
    int i;
    int factorial=1;
    for(i=1;i<=num;i++){
        factorial=(factorial*i);
        return (factorial);
    }
}