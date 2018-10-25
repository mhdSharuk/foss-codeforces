#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    string word;
    for(int i=0;i<n;i++)
    {
        cin>>word;
        if(word[0]=='+' || word[1]=='+')
            count++;
        else if(word[0]=='-' || word[1]=='-')
            count--;
    }
    cout<<count<<endl;
    return 0;
}