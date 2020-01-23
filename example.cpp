#include <iostream> //damit wir cout nutzenkoennen

using namespace std;//damit wir cout anstatt std::cout nutzen können

class myClass{//definieren einer classe mit dem namen myClass
    public: 
        int zahl=13;
        int zahlzwo=26;

        void setzeprivatenInt(int neuerWert){// da privaterInt nicht sichtbar für andere Fun ktionen ist, müssen wir eine Funktion zum ändern bereitstellen, wenn man privaterInt ändern können soll
            privaterInt=neuerWert;
        }

        void einAnderesObjektBearbeiten(myClass& obj){//wir nehmen nur eine referenz an, anstatt das objekt zu kopieren.
            //das bedeutet: in der folgenden Zeile ändern wir das Übergebene Objekt, und alle anderen die dieses
            //objekt kennen, sehen auch die änderung!!
            obj.zahl=24;
        }
        void beschreibeDich(){
            cout<<"\n";
            cout<<"Ich bein ein myClass Objekt.\n";
            cout<<"zahl: "<<zahl<<"\n";
            cout<<"zahlzwo: "<<zahlzwo<<"\n";
            cout<<"privaterInt: "<<privaterInt<<"\n";//seinen eigenen privaten int kann man erreichen!
        }

    private://privat bedeutet, dass alle folgenden Variablen/ funktionen nur von dem objekt selber gesehen werden können
        int privaterInt=16;

};//semikolon nicht vergessen


int main(){
    myClass myObj; //anlegen einer variable vom typ Myclass. Dadurch wird auch automatisch ein objekt erzeugt.
    myClass *ObjReferenz;//hier wird nicht automatisch instanziiert, sondern nur eine leere referenz angelegt
    myClass mySecObj;
    ObjReferenz=&mySecObj;

    myObj.einAnderesObjektBearbeiten(mySecObj);
    //mySecObj wurde geändert und wir können es sehen:
    //mySecObj.beschreibeDich(); zeigt, dass mySecObj.zahl==24

    std::cout<<myObj.zahl;//wenn wir nicht den namespace std nutzen, brauch cout das std:: prefix
    cout<<myObj.zahl;//sonst gehts auch so
    myObj.beschreibeDich();
    mySecObj.beschreibeDich();

    return 1;

}

