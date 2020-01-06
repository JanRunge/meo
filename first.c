#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void printInt(int input)
{
   char meinString[12] ;

   sprintf(meinString, "%d", input);
   printf(meinString);
}
void printFloat(float f ){
printf("%.6f", f);

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
   if(x%3==0)
   {
      printf("fizz");
   }
   if(x%5==0){
      printf("bazz");
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
void zeigertest(){

   int facharbeit_text = 7;
   int *facharbeit_zeiger;
   facharbeit_zeiger = &facharbeit_text;
   facharbeit_text=12;
   wertErhalten(facharbeit_zeiger);
   printInt(*facharbeit_zeiger);
}
void wertErhalten(int *zeiger){
   printInt(*zeiger);
   *zeiger=16;
}

void zeigertest_klassich(){

   int facharbeit_text = 12;
   wertErhalten(facharbeit_text);
   printInt(facharbeit_text);
}
void wertErhalten_klassisch(int wert){
   printInt(wert);
   wert=16;
}
void AddComplex(float reA, float imA,
               float reB, float imB,
               float *reR, float *imR)
{
   float realteil=reA + reB;
   float imteil=imA + imB;
   *reR=realteil;
   *imR=imteil;
}

void MultiplyComplex(float reA, float imA,
               float reB, float imB,
               float *reR, float *imR)
{
//(a+b*i) * (c+d*i) 
//(a+b*i) * (c+d*i) 
//a=reA
//b=imA
//c=reB
//d=imB
   float rteil=reA*reB - imA*imB;
   float iteil=reA*imB + reB*imA;
   *reR=rteil;
   *imR=iteil;
}

               




int main()
{
   /*
   
   */
   // printf("%c",  CallClosesElevator(3,6,9,7));
   zeigertest();
   float ergRealteil;
   float ergImteil;
   float *zeigerReal =&ergRealteil;
   float *zeigerImag =&ergImteil;


   AddComplex(13,2.5,
   3.3, 14, 
   zeigerReal, zeigerImag
   );
   printFloat(ergRealteil);
   printFloat(ergImteil);


}






