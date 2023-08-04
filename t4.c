
# include <stdio.h>
void prime(int);
int main(){
 int num;
 printf("enter");
 scanf("%d",&num);
 prime(num);
 return 0;
}
 void prime(int num){
    int i,c;
    for(i=1;i<=num;i++){
        if(num%1==0){
            c++;
        }
    }
    if(c==2){
        printf("prime number");
    }
    else{
      printf("not a prime number");
    }
    
 }   

