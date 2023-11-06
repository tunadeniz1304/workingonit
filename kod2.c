#include <stdio.h>

int main() {
   double x;

   printf("please type your grade:");
   scanf("%lf",&x);
   if((x>=90))
   {
       printf("Perfect! Your grade is AA");
   }
   else if (x<0 || x > 100) // Changed && to ||
   {
       printf("Please enter a valid grade.");
   }
   else if(x>=80)
   {
       printf("congratulations your grade is BA");
   }
   else if(x>=70)
   {
       printf("Not bad. Your grade is BB");
   }
   else
   {
       printf("Sorry your grade is FF. Keep working!");
   }
   
   return 0;
}