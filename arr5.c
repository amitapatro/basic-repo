#include <stdio.h>
void main(){
    int arr1[5],arr2[5],sumarr[5];
    int i;
    printf("enter 10 elements\n");
    for(i=0;i<=4;i++){
        scanf("%d",&arr1[i]);
    }
   for(i=0;i<=4;i++){
        scanf("%d",&arr2[i]); 
}
for(i=0;i<=4;i++){
    sumarr[i]=arr1[i]+arr2[i];
    printf("the elements of %d is %d\n",i,sumarr[i]);
}
}