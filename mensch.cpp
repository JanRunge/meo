#include <iostream>
using namespace std;
class mensch{
    public:
        int Geburtsjahr;
        int geburtsmonat;
        int geburtstag;
        mensch *kind;

        void SagGeburtstag(){
           
           cout << "Geburtsdatum lautet:";
            cout<<Geburtsjahr;
            cout<<geburtsmonat;
            cout<<geburtstag;
            cout << "\n";

        }
        void setGeburtsdatum(int jahr, int monat, int tag){
            Geburtsjahr=jahr;
            geburtsmonat=monat;
            geburtstag=tag; 
        }
};

int main(){

mensch Mehmet;
mensch MehmetJr;


Mehmet.setGeburtsdatum(1970,1,1);
Mehmet.kind=&MehmetJr;
//MehmetJr.geburtsdatum[3]=(20,06,2025);
Mehmet.SagGeburtstag();

MehmetJr.SagGeburtstag();

    return 0;
}
