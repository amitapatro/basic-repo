#include <stdio.h>
struct student

{int rollno;
char name[30];
float marks;
    
}s3={"lolly"};
void main(){
    struct student s1={1,"amita",90};
    struct student s2={2,"amrita",80};
    printf("info for s1");
    printf("\n%d %s %f",s1.rollno,s1.name,s1.marks);
    printf("\ninfo for s2");
    printf("\n%d %s %f",s2.rollno,s2.name,s2.marks);
    printf("\ninfo for s3");
    printf("\n%d %s %f",s3.rollno,s3.name,s3.marks);
    
    
    
}
