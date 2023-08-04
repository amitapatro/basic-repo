#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
    printf("divisible by 5 and 3");
    }
    if(n%5!=0 && n%3!=0){
        printf("no");
    }
    return 0;
}