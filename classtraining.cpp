#include <iostream>
#include <string>

using namespace std;

class Laptop{
    protected: 
    
    float Bildschirmgroesse=0;
    int anzahlkerne=0;
    int ramgb=0;
    
    public :
        
        Laptop(float wert1, int wert2, int wert3){
            setbildschirmgroesse(wert1);
            setanzahlkerne(wert2);            
            setramgb(wert3);
        }

        void setbildschirmgroesse(float wert1){

            Bildschirmgroesse = wert1;
        }
        virtual void setanzahlkerne(int wert2){
            cout<<"setanzahlkerne in Laptop";
            if(wert2<=4){
                anzahlkerne = wert2;
            }
            
        }
        void setramgb(int wert3){
            ramgb = wert3;
        }

        void beschreibedich(){
            cout<<"bildschirmgroesse"<<Bildschirmgroesse<<"\n";
            cout<<"anzahlkerne"<<anzahlkerne<<"\n";
            cout<<"ramgb"<<ramgb<<" \n";
        }

};
class GamingLaptop : public Laptop{
    public:
        int RPM=0;

        GamingLaptop(float wert1, int wert2, int wert3, int wert4) : Laptop(wert1,wert2,wert3){
            RPM=wert4;
            Bildschirmgroesse= Bildschirmgroesse*2;
            
        }
        void machGamingSachen(){

        }
        void setanzahlkerne(int penis){
            cout<<"setanzahlkerne in GamingLaptop";
            anzahlkerne = penis;
        }
    
    
};


int main(){

    
    GamingLaptop lap3(13,13,13,4);

    Laptop *zeiger;

    zeiger=&lap3;

    lap3.setanzahlkerne(15);
   

    lap3.beschreibedich();



    return 0;
}


