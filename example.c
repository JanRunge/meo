#include <stdio.h>

int main(){
    int zahl=10;
    int *zeigerZahl =&zahl;
    printf("zahl: %d \n",zahl);
    printf("&zahl: %p \n",&zahl);
    printf("zeigerZahl: %p \n",zeigerZahl);
    printf("*zeigerZahl: %d \n",*zeigerZahl);
    printf("--------- \n");
    *zeigerZahl=20;

    printf("zahl: %d \n",zahl);
    printf("&zahl: %p \n",&zahl);
    printf("zeigerZahl: %p \n",zeigerZahl);
    printf("*zeigerZahl: %d \n",*zeigerZahl);

    funkMitZeigerParam(zeigerZahl);
    funkMitIntParam(*zeigerZahl);

    printf("zahl: %d \n",zahl);
    printf("&zahl: %p \n",&zahl);
    printf("zeigerZahl: %p \n",zeigerZahl);
    printf("*zeigerZahl: %d \n",*zeigerZahl);

    return 1;
}

void funkMitZeigerParam(int *zeigerParam){
    printf("--------- \n");
    printf("*zeigerParam: %d \n",*zeigerParam);
    printf("zeigerParam: %p \n",zeigerParam);
    printf("--------- \n");
    *zeigerParam=34;
}
void funkMitIntParam(int zahlParam){
    printf("2---------2 \n");
    printf("zahlParam: %d \n",zahlParam);
    printf("&zahlParam: %p \n",&zahlParam);
    printf("2---------2 \n");
}