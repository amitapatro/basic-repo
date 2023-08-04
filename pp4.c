#include <stdio.h>
int main(){
    int n;
  printf("enter the no of rows:");
  scanf("%d",&n);
  for (int i=1;i<=n;i++){//no. of lines
    for (int j=1;j<=n;j++){//no of columns
        printf("%d",i);
    }
    printf("\n");
  }
  return 0;

}
