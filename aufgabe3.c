#include <stdio.h>
#include <Math.h>

int main(){
    int maximalesGewichtAuto=3000;
    int aktuellesGewichtAuto=300;
    int *aktuellesGewichtAuto= &aktuellesGewichtAuto;

int maximalesGewichtAuto=3000;
    int aktuellesGewichtAuto=300;
    int *aktuellesGewichtAuto= &aktuellesGewichtAuto;


    bool hatGeklappt=erhoeheGewicht(4000,aktuellesGewichtAuto,maximalesGewichtAuto);



}

bool erhoeheGewicht(int zusGewicht, int *aktuellesGewicht, int maxGewicht){
    if(*aktuellesGewicht+ zusGewicht>maxGewicht){
        return false;
    }else{
        *aktuellesGewicht=*aktuellesGewicht+zusGewicht;
        return true;
    }
}



