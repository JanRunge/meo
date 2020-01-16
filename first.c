#include<stdio.h>
#include<stdbool.h>


void gibgeld(int wechselgeld, int *zweier, int *einer, int *fuffi)
{

   *zweier=0;
   *einer=0;
   *fuffi=0;
   int wechselrest= wechselgeld;
   while(wechselrest!=0){
      if(wechselrest>=200){
         wechselrest=wechselrest - 200;
         *zweier= *zweier+1;
         printf("hoeher 2");
      }
      else if(wechselrest>=100){
         wechselrest= wechselrest - 100;
         *einer= *einer+1;
         printf("hoeher 1");

      }
      else if(wechselrest>=50){
         wechselrest= wechselrest - 50;
         *fuffi= *fuffi+1;
         printf("hoeher 5");

      }
      printf("bin in der schleife %d",wechselrest);

   }

}



int main(){
int wechselgeld=550;
int anzahlzweier=10;
int *zweier= &anzahlzweier;
int anzahleiner;
int *einer=&anzahleiner;
int anzahlfuffi;
int *fuffi=&anzahlfuffi;


printf("hat geklappt");
gibgeld(wechselgeld, zweier, einer, fuffi);

printf("ich habe  %d zweier bekommen",anzahlzweier);
printf("ich habe %d einer bekommen", anzahleiner);
printf("ich habe %d fuffi bekommen", anzahlfuffi);


return 0;
}