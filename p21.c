// factors of a number
#include <stdio.h>
int main(){
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(n%i==0)
        printf("%d",i);
    }
    return 0;
}
