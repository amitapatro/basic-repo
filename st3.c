#include <stdio.h>
struct student
{int rollno;
char name[30];
float marks;
};
void main(){
    struct student s1;
    struct student s2;
 printf("enter rollno,name,marks for s1");
 scanf("\n%d %s %f",&s1.rollno,&s1.name,&s1.marks);
 printf("enter rollno,name,marks for s2");
 scanf("\n%d %s %f",&s2.rollno,&s2.name,&s2.marks);
  printf("info for s1");
    printf("\n%d %s %f",s1.rollno,s1.name,s1.marks);
    printf("\ninfo for s2");
    printf("\n%d %s %f",s2.rollno,s2.name,s2.marks);
}
