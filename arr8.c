//transpose of a matrix
#include <stdio.h>
void main(){
    int m,n;
    int a[10][10],i,j;
    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter number of columns");
    scanf("%d",&n);
    printf("enter matrix elements");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("matrix is:\n");// for matrix printing
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("transpose is:");// for transpose printing
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t",a[j][i]);
    }
    printf("\n");
}
}