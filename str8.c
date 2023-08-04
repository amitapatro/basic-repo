#include <stdio.h>
void main()
{
    struct person{
        char name[10];
        int age;
        int salary;
    };
    struct person p[2];
    printf("enter the name ,age,salary of 2 employees:");
    for(int i=0;i<2;i++){
        scanf("%s%d%d",p[i].name,&p[i].age,&p[i].salary);
    }

        printf("the name of the first person is %s and age of second person is %d",p[0].name,p[1].age);
    
}