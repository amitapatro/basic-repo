# include <stdio.h>
void main (){
    int ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
      printf("upper case\n");
    if(ch>=97 && ch <= 122)
      printf("lower case\n");
    if(ch >=48 &&ch<=57)
      printf("\ndigits");
    if (ch>=0 && ch<48 || ch>57 && ch<65||ch>90 && ch<97|| ch>122)
      printf("special symbols");
}