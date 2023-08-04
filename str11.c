#include <stdio.h>
struct student {
    int id;
    char name[10];
};
void main()
{
    struct student s1;
    void info( struct student s1);
    printf("enter id and name");
    scanf("%d%s",&s1.id,s1.name);
    info(s1);
    void info(struct student x){
    printf("this is what u have entered");
    printf("id=%d,name-%d,x.id,x.name");}
}