#include <stdio.h>
char func(){
    char c;
printf("enter the character");
scanf("%c",&c);
}
void main(){
    printf("hello");
    char func();
    char ch;
    ch=func();
    printf("ch=%c",ch);

}