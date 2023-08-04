//no argu with return type
#include <stdio.h>
 sum(void);//dec
void main(){
    int s;
    s=sum();//store,call
    printf("sum=%d",s);

}
int sum()//def
    {
    int a=7,b=5,sum=0;
    sum=a+b;
    return sum;//....
    }
