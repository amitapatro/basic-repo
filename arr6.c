#include <stdio.h>
void main(){
    int a[2][3],sum=0,i,j;
    printf("enter 6 elements");
   for(i=0;i<2;i++){
    for(j=0;j<3;j++)
   
   { scanf("%d",&a[i][j]);
   }
   }
   printf("matrix is :\n\t");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
        sum=sum+a[i][j];
        }
        
        printf("\n");
        }
        printf("\nsum=%d",sum);
    }

