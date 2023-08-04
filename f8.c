#include <stdio.h>
int main(){
    int n;
    int sum=0;
    int lastdigit=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        lastdigit=n%10;
        if(n%2==0)
        sum=sum+lastdigit;
        n=n/10;
    }
        printf("the sum is %d",sum);
    return 0;
}