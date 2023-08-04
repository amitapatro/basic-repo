#include <stdio.h>
void leap(int);
int main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    leap(year);
    return 0;


}
void leap(int year){
    
    if(year%400==0 || year%100!=0  && year%4==0){
    printf("leap year",year);
    }
    else{
    printf("not a leap year",year);
    }
} 