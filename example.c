#include <stdio.h>

int main(){
    int zahl=10;
    int *zeigerZahl =&zahl;// es wird ein Zeiger definiert, der auf zahl zeigt.
    *zeigerZahl=20;//der wert von Zahl wird durch den Zeiger auf 20 gesetzt

    funkMitZeigerParam(zeigerZahl);//es wird der Zeiger übergeben (0x29480)
    //jetzt ist Zahl=34
    funkMitIntParam(*zeigerZahl);//es wird der wert übergeben(20)
    //zahl=34

    return 1;
}

void funkMitZeigerParam(int *zeigerParam){//die Funktion nimmt einen Zeiger an
    *zeigerParam=34;//der wert der variable, auf die der übergebene Zeiger zeigt, wird auf 34 gesetzt.
}
void funkMitIntParam(int zahlParam){
    zahlParam=35;//der wert der variable zahlParam wird auf 35 gesetzt. Zahl ist davon unberührt
}