// swap 2 numbers using fun cbr method..
#include <stdio.h>
void swap(int*, int*);// declare
int main(){
    int a=10,b=20;
    swap(&a,&b);// call
    printf("a=%d,b=%d",a,b);
    return 0;

}
void swap(int *x, int *y){// define
    int t;
    t=*x;
    *x=*y;
    *y=t;
}