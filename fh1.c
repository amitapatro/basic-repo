#include <stdio.h>
#include<string.h>
void main()
{
    char ch [15];
    printf("enter");
    scanf("%s",ch);
    FILE*fp;
    fp=fopen("fhp1.txt","r");
    if(fp==NULL){
        printf("can't be open");
    }
     for(int i=0;i<strlen(ch);i++){
        fputc(ch[i],fp);
     }
     fclose(fp);
}