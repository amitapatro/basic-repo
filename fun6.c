// call by refrence
#include <stdio.h>
void fun (int*,int*);//declaration//**
void main(){//calling function
    int x=5,y=7;
    fun(&x,&y);// called function //give address at called function**
    printf("x=%d,y=%d\n",x,y);
}
void fun (int* x,int* y){ //defination//**
     *x=7;//*
    * y=5;//*
    printf("x=%d,y=%d\n",*x,*y);// first called function will be executed**
}