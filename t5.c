
#include <stdio.h>
void main(){
    int m,n;
    int *pm=&m,*pn=&n;
    printf("enter the first range");
    scanf("%d",&m);
    printf("enter second range");
    scanf("%d",&n);
    while(pm<pn){
        if(*pm%2==00){
            printf("%d",*pm);
        }
            pm++;
        
    }
    
}