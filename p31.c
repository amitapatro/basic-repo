//sum of digits of a no.
#include <stdio.h>
void main(){
    int n,r=0;
    int sum=0;
    printf("enter");
    scanf("%d",&n);
while(n!=0) {
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("the sum is%d",sum);
}