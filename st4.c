#include<stdio.h>
struct student{
    int rollno;
    char name[40];
    char grade[5];
};
void main(){
    int i;
    struct student s1;
    printf("enter the roll number\n");
    scanf("%d\n",&s1.rollno);
printf("enter the name\n");
    scanf("%s\n",&s1.name);
    for(i=0;i<=4;i++){
        printf("enter the grade of 5 sub \n");
        scanf("%c",&s1.grade[i]);}
      // { printf("enter the grade of bel\n");
        //scanf("%c",&s1.grade[1]);}
       //{ printf("enter the grade of maths\n");
        //scanf("%c",&s1.grade[2]);}
    //{printf("enter the grade of eng\n");
      //  scanf("%c",&s1.grade[3]);}
       //{ printf("enter the grade of bce\n");
        //scanf("%c",&s1.grade[4]);
    //}
    }
    
    