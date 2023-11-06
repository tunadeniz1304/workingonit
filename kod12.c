#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n <= i; n++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int a = 5; a >0; a--)
    {
       for (int b = 0; b <=a; b++)
       {
        printf("*");
       }
       printf("\n");
    }
    
    
    
    
    return 0;
}