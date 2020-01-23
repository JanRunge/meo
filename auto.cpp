#include <iostream>

using namespace std;

class Fahrrad{
    public:
        int gewicht=30;
};

class Auto{
    public:
        int maximalGewicht=3000;
        int aktuellesGewicht=300;
        Fahrrad *meinfahrrad;

        bool erhoeheGewicht(int zusGewicht){
            if(aktuellesGewicht+ zusGewicht>maximalGewicht){
                return false;
            }else{
                aktuellesGewicht=aktuellesGewicht+zusGewicht;
                return true;
            }
        }
        int holeGewicht(){
            int fahrradgewicht= (*meinfahrrad).gewicht;
            return aktuellesGewicht+fahrradgewicht ;

        }
        void print(){
            cout<<"Auto:\n";
            int gew=holeGewicht();
            cout<<"aktuellesGewicht:"<<gew<<"\n";
            cout<<"maximalGewicht:"<<maximalGewicht<<"\n";

        }
        void packFahrradDrauf(Fahrrad& f){
            meinfahrrad=&f;
        }
};


int main(){ 
    
    Auto meinAuto;

    Fahrrad fahr;

    meinAuto.maximalGewicht=4000;

    meinAuto.erhoeheGewicht(400);
    meinAuto.packFahrradDrauf(fahr);
    meinAuto.print();
    fahr.gewicht=60;
    meinAuto.print();

    Auto meinAuto2;
    meinAuto2.erhoeheGewicht(4000000);
    
    meinAuto.print();
    return 0;
}