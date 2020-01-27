#include <iostream> //damit wir cout nutzenkoennen
#include <string>

using namespace std;

class Sportwagen{
    public: 
        string name;

        Sportwagen (int p_maxSpeed){
            cout<<"Sportwagen mit der max geschw. "<<p_maxSpeed<<" erstellt\n";
            maxSpeed=p_maxSpeed;
        }
        void setCurSpeed(int neuerWert){
            if(neuerWert<=maxSpeed){
               curSpeed=neuerWert;     
            }else {
                
                cout<<"Geschwindigkeitserhoehung nicht moeglich bei "<<name<<"\n";
                cout<<"neuer wert:"<<neuerWert<<"maxwert:"<<maxSpeed;
            }
        }
        void setMaxSpeed(int neuerWert){
           maxSpeed=neuerWert;     
        }

        void beschreibeDich(){
            
            cout<<"Ich bin ein " ;
            cout<< name <<"\n";
            cout<<"zahl: "<<maxSpeed<<"\n";
            cout<<"zahlzwo: "<<curSpeed<<"\n";
        }
        void heckSpoilerAufsetzen(int hoehe) {
            heckspoilerHoehe=hoehe;
        }

    private://privat bedeutet, dass alle folgenden Variablen/ funktionen nur von dem objekt selber gesehen werden können
        int curSpeed=0;
        int maxSpeed=0;//attribute des Objekts
        int heckspoilerHoehe;


};//semikolon nicht vergessen


int main(){
    Sportwagen audiTT(250);
    audiTT.setMaxSpeed(200);
    audiTT.setCurSpeed(200);
    audiTT.name="auditt";

    Sportwagen audiR8(300);
    audiR8.setCurSpeed(250);
    audiR8.name="R8";

    audiTT.beschreibeDich();

    audiR8.beschreibeDich();

    return 0;

}

