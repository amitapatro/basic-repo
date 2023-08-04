
#include <stdio.h>
void main()
{
    int a[]={1,2,3};
    int *p=a;
    printf("\n%d",*p);
    printf("\n%d",*p--);
    printf("\n%d",*p);
}