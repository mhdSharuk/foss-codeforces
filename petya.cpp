#include <iostream>

using namespace std;

int main() {
	string a;
	string b;
	cin>>a>>b;
	for(int i = 0;i<a.size();i++){
	    a[i] = tolower(a[i]);
	    b[i] = tolower(b[i]);
	    }
	    if(a.compare(b) == 0){
	        cout<<"0";
	    }
	    else{
	        for(int i = 0;i<a.size();i++){
	            if(a[i]<b[i]){
	                cout<<"-1";
	                break;
	            }
	            if(a[i]>b[i]){
	                cout<<"1";
	                break;
	            }
	        }
	    }
	    return 0;
	}