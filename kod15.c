#include <stdio.h>

int main() {
    int x , y , z ;// x = X sayısı , y = kaç tane olduğu , z = yükseklik
    printf("x degerini giriniz : ");
    scanf("%d",&x);
    printf("y degerini giriniz : ");
    scanf("%d",&y);
    printf("z degerini giriniz : ");
    scanf("%d",&z);

    
   for (int i = x; i > 0; i--)
   {
   int total = x * y;
    
    for (int i = total; i > 0; i--) // total kadar * yazdır
    {
        printf("*");
        
    }
    
    for (int i = 0; i < x; i++) // x kadar X yazdır
    {
        printf("X");
    }
    for (int i = z; i >z; i--)
    {
        printf("\n");
    }
      printf("\n");
    
    y--;
}
    return 0;
}