
//with arguements without return type
#include <stdio.h>
void sum (float,float);//declare
void main(){
    float  x,y;
    printf("enter");
    scanf("%f%f",&x,&y);
    sum(x,y);//call passed arguements static..can be done
}
void sum(float a,float b)//define
{
    float s=0;
    s=a+b;
    printf("sum=%f",s);
}

