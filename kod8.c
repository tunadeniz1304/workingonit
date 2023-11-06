#include <stdio.h>

int main() {
   int gir,ort,top,adet;
    adet=0;
    top=0;
while (gir!=-1)
{
   scanf("%d",&gir);
    adet++;
top = top+gir;
ort = top/adet;
printf("su ana kadar girilen sayilarin ortalamasi= %d\n ",ort);
}




    return 0;
}