#include <iostream>
#include <vector>
# include <algorithm>
using namespace std;

void gibvektor(vector<int> v){
    int i;
    int groesse = v.size();
    i=0;
    while(i<groesse){
        
        int l= v[i];
        cout<<l;
        i++;
    }



}

class Vectorprocessor {
    public:
    Vectorprocessor(vector<int> v){
        numbers = v; 

    };

    size_t Getsize(){
        size_t z;
        z = numbers.size();  
        return z;
    }

    int SumPositiveNumbers(){
        int i       = 0             ;
        int groesse = numbers.size();
        int x       = 0             ;
        while(i<groesse){
        
            int l = numbers[i];
            
            i++;
            if(l > 0){
                x = x + l;  
            }   
        
        }
        return x;
    
    }
    private:
    vector<int> numbers;

};

int main(){
    vector<int> v ={4, 5, -6, 7};
    Vectorprocessor b(v);
    
    
cout<< "da sind werte"<< endl;
gibvektor(v);
cout<<b.SumPositiveNumbers();

    return 0;
}