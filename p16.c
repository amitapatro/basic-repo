# include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    a=i*n;
    printf("%d*%d=%d\n",n,i,a);
  getch();
}  
}