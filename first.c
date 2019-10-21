#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printInt(int input)
{
   char meinString[12] ;

   sprintf(meinString, "%d", input);
   printf(meinString);
}
void meineFunktion(int x, int f)
{
   int ergebnis;

   if(f>10 && f<20) 
   {
      ergebnis = x*f;
   }else if(f>10)
   {
      ergebnis = x+f+f;
   }
   else{
      ergebnis = x+f;
   }
   printInt(ergebnis);
   printf("\n");
}


void meinsfunktion(int x)
{
   printInt(x);
   int meinsvariable = x;

   if(x%5==0){
      printf("bazz");
   }

   if(x%3==0)
   {
      printf("fizz");
   }
   printf("\n");
}
char CallClosesElevator(int pos_a, int pos_b, int pos_c, int caller)
{
   int abstand_a= abs(pos_a - caller);
   int abstand_b= abs(pos_b - caller);
   int abstand_c= abs(pos_c - caller);

   if(abstand_a<= abstand_b && abstand_a <=abstand_c){
      return 'a';

   }
   else if(abstand_b <= abstand_a && abstand_b <= abstand_c){
      return 'b';

   }
   else if(abstand_c <= abstand_a && abstand_c <= abstand_b){
      return 'c';
   }

}  

int main()
{
   printf("%c",  CallClosesElevator(3,6,9,7));
}




