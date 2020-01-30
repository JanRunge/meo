#include <string>
#include <algorithm>
#include <iostream>
#include <list>
#include <functional>   // std::greater
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
list<int> sortiere(list<int> meineliste){
    meineliste.sort();
    list<int> erg;
    auto zeigerAufAktuelleZahl = meineliste.end();
    for(int i = meineliste.size()-1; i>=0; i--){
        erg.push_back(*zeigerAufAktuelleZahl);
        zeigerAufAktuelleZahl--;
    }
    return erg;
}

 list<int> lueckefuellen(list<int> meineliste){

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
    return meineliste;
 }


int main(){
    list<int> meineliste;

    meineliste.push_back(0);
    meineliste.push_back(1);
    meineliste.push_back(2);
    meineliste.push_back(4);

    // lueckefuellen(meineliste);
    meineliste.sort(greater<int>());

    gibliste(meineliste);
    meineliste.sort();
    gibliste(meineliste);


    return 0;

}
