#include<iostream>
using namespace std;
int main(){
    int m,n,a;
    cin>>m>>n;
    if(m%2 == 0){
        a = (m/2)*n;
    }
    else{
        a = ((m/2)*n)+(n/2);
    }
    cout<<a;
    return 0;
}
