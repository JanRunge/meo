#include <string>
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

void gibliste(list<int> liste){
    int i=0;
    cout<<"\n";
    auto zeigerAufAktuelleZahl = liste.begin();
    while(i<liste.size()){
        
        
        cout<<*zeigerAufAktuelleZahl<<" ";

        zeigerAufAktuelleZahl++;
        i++;
    }
    cout<<"\n";

}
int main(){
    list<int> meineliste;

    meineliste.push_back(0);
    meineliste.push_back(1);
    meineliste.push_back(2);
    meineliste.push_back(4);

    meineliste.sort();

    int i=0;
    auto zeigerAufAktuelleZahl = meineliste.begin();

    int groesse=meineliste.size();
    while(i<groesse){
        
        if(i==*zeigerAufAktuelleZahl){
            cout<<"i=zeiger :)"<<i;
        }else{
            cout<<"i!=zeiger :("<<i<<*zeigerAufAktuelleZahl;
            meineliste.push_back(i);
        }
        zeigerAufAktuelleZahl++;
        
        i++;
    }
    cout<<"\n";

    gibliste(meineliste);
    meineliste.sort();
    gibliste(meineliste);


    return 0;

}
