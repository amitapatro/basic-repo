#include <stdio.h>
int main()
{
    int costprice,sellingprice;
    printf("enter the cost price");
    scanf("%d",&costprice);
    printf("enter the selling price");
    scanf("%d",&sellingprice);
    if(sellingprice>costprice){
        printf("profit");
    }
    if(costprice>sellingprice){
        printf("loss");
        if(sellingprice==costprice){
            printf("neither loss nor profit");
        }
    }
    return 0;
}