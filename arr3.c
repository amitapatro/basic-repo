#include <stdio.h>
void main(){
    int marks[5],i,sum=0;
    float avg;
    printf("enter the marks");
    for(i=0;i<=4;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=4;i++){
        sum=sum+marks[i];
        avg=sum/5;
    }
        printf("the sum and avg is %d,%f\n",sum,avg);
    
}