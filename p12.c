# include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
     printf("enter the third number");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest",a);
        }
        else 
        printf("%d is greatest",c);
    }
    else{ 
    if(b>c)
    printf("%d is greatest",b);
    else 
    printf("%d is greatest",c);
    }
     return  0; 

}