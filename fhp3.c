# include<stdio.h>
void main(){
    char ch [20];
    FILE*fp;
    fp=fopen("amita.txt","w");
    if(fp==NULL){
        printf("not there");
    }
    printf("enter");
    gets(ch);
    fputs(ch,fp);
    fclose(fp);
}