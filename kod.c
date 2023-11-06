#include <stdio.h>

int main() {
int x ;

printf("kac saat calistiginizi yaziniz:");
scanf("%d", &x );


if (x <= 10 && x > 0)
{ printf("alacagin ücret: %dtl" , x * 5 ) ;}
 else if (x <= 0)
 {
  printf("hata yaptiniz ");
 }
 
else if (x>10 && x <=20 )
{
  printf("alacagin ücret: %dtl" , (x-10)*3 + 50);
}
 else 
 {printf("alacagin ücret: %dtl" , (x-20)*2 + 80);}

    return 0;
}