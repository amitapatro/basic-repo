# include <stdio.h>
void swap(int *,int*);
void main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
     printf("a=%d,b=%d",a,b);
}
void swap(int*x,int*y)
{
    *x=*x+*y;
    *y=*x-*y;
    // printf("x=%d,y=%d,x,y");
    *x=*x-*y;
     printf("x=%d,y=%d",x,y);
}