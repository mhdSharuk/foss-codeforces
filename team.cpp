#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    int val;
    int pe,va,to;
    for(int i =0;i<n;i++){
        cin>>pe>>va>>to;
        val = pe+va+to;
        if((val>1) && (val<4))
        count++;
    }
    cout<<count;
}