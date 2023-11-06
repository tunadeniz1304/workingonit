#include <stdio.h>

int main() {
    int gir, x , y;
    x =0;
    y=1;
  printf("Bir sayi giriniz: \n");
   scanf("%d", &gir); 
   

   
   
   
   
   
   
   
   if ((gir == 2))
   {
    printf("2 asal bir sayidir\n");
   }
    else if (gir==1 || gir==0)
    {
        printf("%d asal bir sayi degildir\n", gir);
    }
    else if (gir <0)
    {
       printf("Negatif sayilar asal sayi degildir\n");
    }
    
    else{while (y<gir-1)
    {y++;
    if (gir%y==0)
    {
        x=1;
        break;
    }
   


    }
    
    
    if (x==0)
    {
       printf("%d asal bir sayidir\n", gir);
    }
    else{ printf("%d asal bir sayi degildir\n", gir);
    }
    return 0;
}}