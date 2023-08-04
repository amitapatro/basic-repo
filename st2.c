#include <stdio.h>
struct student
{int rollno;
char name[30];
float marks;
};
void main(){
    struct student s1;
    struct student s2;
 printf("enter rollno for s1");
 scanf("%d",&s1.rollno);
printf("enter name for s1");
 scanf("%s",&s1.name);
 printf("enter marks for s1");
 scanf("%f",&s1.marks);
 printf("enter rollno for s2");
 scanf("%d",&s2.rollno);
printf("enter name for s2");
 scanf("%s",&s2.name);
 printf("enter marks for s2");
 scanf("%f",&s1.marks);
    printf("info for s1");
    printf("\n%d %s %f",s1.rollno,s1.name,s1.marks);
    printf("\ninfo for s2");
    printf("\n%d %s %f",s2.rollno,s2.name,s2.marks);
}
