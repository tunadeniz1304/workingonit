#include <stdio.h>
int fact(int);
int main() {
    int x;
printf("faktoriyelini bulmak istediginiz sayiyi giriniz: ");
scanf("%d",&x);
printf("%d sayisinin faktoriyeli: %d", x ,fact(x));
}


int fact(int x) {
int carp =1;

for (int i = 1; i <= x; i++)
{
    carp*=i;
}





    return carp;
}