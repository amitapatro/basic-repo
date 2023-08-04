#include <stdio.h>
int main()
{
    int l;
    printf("enter the lentgth:");
    scanf("%d",&l);
    int b;
    printf("enter the breadth");
    scanf("%d",&b);
    int a= l*b;
    int p= 2*(l+b);
    if(a>p){
        printf("area is greater"); 
    }
    if(p>a){
        printf("perimeter is greater");
    }
    if(p==a){
        printf("both are equal");
    }
    return 0;
}

