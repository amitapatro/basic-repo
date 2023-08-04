#include<stdio.h>
void main(){
    int num,rev=0,rem;
    
    
    printf("enter 5 digit number");
    
    scanf("%d",&num);
    while( num!=0){
   rem=num%10;
   rev=rev*10+rem;
    num=num/10;
    

    }
    printf("the reverse is %d",rev);
    if(rev==num)
    printf("\n%d is equal to %d",num,rev);
    else
    printf("%d is not equal to %d",num,rev);
    
}