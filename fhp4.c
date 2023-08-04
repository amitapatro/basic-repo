#include<stdio.h>
void main(){
    char ch[20];
    FILE*fp;
    fp=fopen("amita.txt","r");
    if(fp==NULL){
        printf("not there");
    }
    while(fgets(ch,19,fp)!=NULL){
        printf("%s",ch);
    }
    fclose(fp);
}