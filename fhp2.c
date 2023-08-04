#include <stdio.h>
#include<conio.h>
void main(){
    char ch;
    FILE *fp;
    fp=fopen("fhp1.txt","r");
    if(fp==0){
        printf("not there");
    }
    while(1){
        ch=fgetc(fp);
        if(ch==EOF)
            break;
            printf("%c",ch);
        
    }
    fclose(fp);
  //  getch();
}