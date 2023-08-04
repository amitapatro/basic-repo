#include <stdio.h>
void main(){
    int a[2][3],i,j;
printf("enter matrix elements");
for(i=0;i<=1;i++){
    for(j=0;j<=2;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("matrix is:\n");// for matrix printing
for(i=0;i<=1;i++){
    for(j=0;j<=2;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("transpose is:");// for transpose printing
for(i=0;i<=2;i++){
    for(j=0;j<=1;j++){
        printf("%d\t",a[j][i]);
    }
    printf("\n");
}
}