#include <stdio.h>
int fib(int);
int main() {
int n;
printf("fibonacci fonksiyonunu uygulamak istediginiz sayiyi yazin: ");
scanf("%d", &n);

printf("fibonacci of %d is %d",n,fib(n));


}
   int fib(int n) {
    int a=1 , b=1  ;
    int c;
    for ( int i = 3; i <=n; i++)  
    {
      c=a+b;
       a=b;
       b=c;
    }
    
   
   
    return c;
   }