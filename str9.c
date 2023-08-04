//nested structure
#include<stdio.h>
struct dob{
    int day;
    int month;
    int year;
};
struct student{
    int id;
    char name[10];
    struct dob d1;
};
void main(){
 struct student s1;
 printf("enter the id\n");
 scanf("%d",&s1.id);
 printf("enter the name\n");
 scanf("%s",s1.name);
 printf("enter the dob ");
 scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year) ;
 printf("this is what you have entered\n");
 printf("\nid=%d\nname=%s\ndob=%d-%d-%d",s1.id,s1.name,s1.d1.day,s1.d1.month,s1.d1.year);  
}

