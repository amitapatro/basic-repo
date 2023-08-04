#include <stdio.h>
void main(){
    struct book {
        char name[20];
        float price;
        int pages;
    };
    //void main(){
        struct book b[2];
     printf("enter the names,price,pages of 2 books:");
     for(int i=0;i<2;i++){
        scanf("%s\n%f\n%d",b[i].name,&b[i].price,&b[i].pages);
     }
      for(int i=0;i<2;i++){
        printf("\nthis is what you heve entered:");
        printf("\n%s\n%f\n%d",b[i].name,b[i].price,b[i].pages);
      }
}
    
