#include <stdio.h>

int main() {
   int ilk=0;
   int gir;
    
    for (int i = 0; i <3; i++)
    {scanf("%d",&gir);
      if (gir>ilk)
      {
        ilk=gir;
      }
      
      }

    
    printf("the biggest number is %d\n",ilk);
    
    return 0;
}