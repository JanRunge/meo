#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


list<int> removeDuplicates(list<int> l){
    list<int> erg;
    l.sort();
    auto zeiger = l.begin();

    int i=0;
    while(i<l.size()){
        
        
        
        int k=0;
        auto ergzeiger = erg.begin();
        bool gefunden =false;

        while(k<erg.size()){
            if(*ergzeiger==*zeiger){
                gefunden=true;
            }
            ergzeiger++;
            k++;
        }
        if(!gefunden){
            erg.push_back(*zeiger);
        }
        zeiger++;
        i++;
    }



}