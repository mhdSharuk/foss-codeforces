#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    int x;
    int flag = 0;
    int count = 0;
    cin>>n;
    cin>>k;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    for(int j = 0;j<n;j++){
        if(ar[j]!=0)
        {if(ar[j]>=ar[k-1]){
            count= count+1;
        }}
    }
    cout<<count;
    return 0;
    
}