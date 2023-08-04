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
    struct dob d[4];
};
void main(){
 struct student s[4];
 printf("enter the id of 4 students\n");
 for( int i=0;i<4;i++){
 scanf("%d",&s[i].id);}
 printf("enter the name\n");
 for(int i=0;i<4;i++){
 scanf("%s",s[i].name);}
 printf("enter the dob ");
 for( int i=0;i<4;i++){
 scanf("%d%d%d",&s[i].d[i].day,&s[i].d[i].month,&s[i].d[i].year) ;}

 printf("this is what you have entered\n");
 for(int i=0;i<4;i++){
    printf("\nid=%d\nname=%s\ndob=%d-%d-%d",s[i].id,s[i].name,s[i].d[i].day,s[i].d[i].month,s[i].d[i].year);  }
}

