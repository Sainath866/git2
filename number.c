#include <stdio.h>
int main(){
    int *p ,a[10],i, sum,n;
  //printf("enter the number");
   scanf("%d",&n);
   p=a;
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++);
   { 
    sum=sum+*p;
    p++;
   }
printf("sum is %d",sum);
return 0;

   }

