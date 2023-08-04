#include <stdio.h>
void main()
{
    int i=3,n,a=0,b=1,c;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        i++;
        a=b;
        b=c;
    }
    printf("%d",c);
}