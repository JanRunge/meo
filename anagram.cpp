# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

bool isAnagramm(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1==str2;


}


int main(){
    if(isAnagramm("abc","cab")){
        cout<<"ist anagramm!";

    }else{
        cout<<"ist kein anagramm!";
    }
    return 0;


}

