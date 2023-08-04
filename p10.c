#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
 printf("enter the first number:"); 
 scanf("%d",&a);
printf("enter the second number:"); 
 scanf("%d",&b);
printf("enter the third number:"); 
 scanf("%d",&c);
 printf("enter the fourth number:"); 
 scanf("%d",&d);
 if (a>b && a>c && a>d)
 {
    printf("%d is greatest" ,a);
 }
 if (b>a && b>c && b>d)
 {
    printf("%d is greatest" ,b);
 }
 if (c>a && c>b && c>d)
 {
    printf("%d is greatest" ,c);
 }
 if (d>a && d>b && d>c)
 {
    printf("%d is greatest" ,d);
}
return 0;
}
