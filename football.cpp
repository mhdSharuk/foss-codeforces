#include<iostream>
using namespace std;
int main()
{
    string fb;int sum1=0;int sum2=0;int sum3=0;int sum4=0;
    cin>>fb;
    int l=fb.size();
    for(int i=0;i<l;i++)
    {
        if(fb[i]=='0')
             {
               sum1=sum1+1;
               if(sum1>=7)
                   {
                      sum3=sum1;
                   }
             }           
       else
    {
        sum1=0;
    }
       if(fb[i]=='1')
             {
               sum2=sum2+1;
               if(sum2>=7)
                   {
                      sum4=sum2;
                   }
             }           
       else
    {
        sum2=0;
    }}
    if(sum3>6||sum4>6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    }