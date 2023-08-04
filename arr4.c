#include <stdio.h>
void main(){
    int a[10],i;
    int even=0;
    int odd =0;
    printf("enter the 10 elements,except 0");
for(i=0;i<=9;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<=9;i++){
    if(a[i]%2==0)
    even=even+1;
    else
    odd=odd+1;
}
printf("even elements are %d",even);
printf("odd elements are %d",odd);

}

