#include<iostream>
using namespace std;
int main(){
    string w;
    cin>>w;
    for(int i = 0;i<w.size();i++){
        w[i] = tolower(w[i]);
        if(w[i] == 'a' || w[i] == 'o' || w[i] == 'y' || w[i] == 'e' || w[i] == 'u' || w[i] == 'i'){
            continue;
        }
        else{
            cout<<"."<<w[i];
        }
    }
    return 0;
}