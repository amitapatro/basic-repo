// sum of individual rows and columns
#include<stdio.h>
void main(){
    int a[2][2],i,j,sr,sc;
    printf("enter the matrix elements");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        sr=0;// sum of row
        sc=0;// sum of coloumn
        for(j=0;j<2;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];

        }
printf("sr=%d,sc=%d",sr,sc);
    }
    printf("\n");
}