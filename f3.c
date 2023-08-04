#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("the number is composite",n);
            break;
        }
    }
    return 0;
}