
// fibanocci
#include <stdio.h>
void main(){
    int i,a=0,b=1,c,n;
  printf("enter(n>2)");
  scanf("%d",&n);
  printf("fibanocci series :0 1");
  for(i=1;i<=n-2;i++){
    c=a+b;
    a=b;
    b=c;
  
    printf(" %d",c);
  }



}