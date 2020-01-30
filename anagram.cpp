# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

using namespace std;

bool isAnagramm(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1==str2;
}

bool isAnagramm(vector<int> str1, vector<int> str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    bool erg;
    return str1==str2;
}

int main(){
    vector<int> v1={1,2,3};
    vector<int> v2={1,3,2};

    string str1 ="abc";
    string str2 ="bac";



    if(isAnagramm(v1,v2)){
        cout<<"vector ist anagramm!";

    }else{
        cout<<"vector ist kein anagramm!";
    }
    cout<<"\n";
    if(isAnagramm(str1,str2)){
        cout<<"string ist anagramm!";
    }else{
        cout<<"string ist kein anagramm!";
    }
    return 0;

}



