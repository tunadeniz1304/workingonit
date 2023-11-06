#include <stdio.h>

int main() {
 int a[10],toplam,buyuk,kucuk;
buyuk=0;
kucuk=100;
toplam=0;

for (int i = 0; i < 10; i++)
{
    printf("Enter the grade of student %d : ", i+1);
    scanf("%d", &a[i]);
    toplam=toplam+a[i];
    
    
    
    
    
    
    
    
    if (a[i]>buyuk)
    {
        buyuk=a[i];
    }
    if (a[i]<kucuk)
    {
        kucuk=a[i];
    }



}




printf("The average of the grades is : %d\n",toplam/10);









    return 0;
}