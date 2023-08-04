#include <stdio.h>
int main(){
    int n;
  printf("enter the no of rows:");
  scanf("%d",&n);
  for (int i=1;i<=n;i++){//no. of lines
  int a=1;
    for (int j=1;j<=n;j++){//no of columns
        printf("%d",a+64);
    }
    printf("\n");
  }
  return 0;
}
//A B C D
//A B C D