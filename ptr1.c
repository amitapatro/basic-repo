#include <stdio.h>
void main(){
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("ad of i=%u",&i);
    printf("ad of i=%u",j);
    printf("ad of i=%u",*k);// ad of i is stored in j and *k displays valu stored in j.
   printf("ad of j=%u\n",&j);
   printf("ad of j=%u",k);
   printf("value of i=%d\n",i);
   printf("value of i=%d\n",*j);
   printf("value of i=%d\n",**k);

}