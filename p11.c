#include <stdio.h>
int main ()
{
    int age1;int age2;int age3;
    printf("enter the age of ram:");
    scanf("%d",&age1);
    printf("enter the age of shyam:");
    scanf("%d",&age2);
    printf("enter the age of ajay:");
    scanf("%d",&age3);
    if(age1<age2 && age1<age3)
    {
        printf("ram is youngest",age1);
    }
    if(age2<age1 && age2<age3)
    {
        printf("shyam is youngest",age2);
    }
    if(age3<age1 && age3<age2)
    {
        printf("ajay is youngest",age3);
    }
}

