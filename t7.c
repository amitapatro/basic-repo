
#include <stdio.h>
void main()
{
    int a=5;
    float b=3.4;
    char c='A';
    void *vp;
    vp=&a;
    printf("%d\n",*(int*) vp);
    vp=&b;
    printf("\n%f",*(float*)vp);
    vp=&c;
    printf("\n%c",*(char*)vp);
}