#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%12==0)
        {
            cout<<n-11<<" "<<"WS"<<endl;
        }
        if(n%12==1)
        {
            cout<<n+11<<" "<<"WS"<<endl;
        }
        if(n%12==2)
        {
            cout<<n+9<<" "<<"MS"<<endl;
        }
        
        if(n%12==3)
        {
            cout<<n+7<<" "<<"AS"<<endl;
        }
        if(n%12==4)
        {
            cout<<n+5<<" "<<"AS"<<endl;
        }
        if(n%12==5)
        {
            cout<<n+3<<" "<<"MS"<<endl;
        }
        if(n%12==6)
        {
            cout<<n+1<<" "<<"WS"<<endl;
        }                        
        if(n%12==7)
        {
            cout<<n-1<<" "<<"WS"<<endl;
        }
        if(n%12==8)
        {
            cout<<n-3<<" "<<"MS"<<endl;
        }
        if(n%12==9)
        {
            cout<<n-5<<" "<<"AS"<<endl;
        }    
        if(n%12==10)
        {
            cout<<n-7<<" "<<"AS"<<endl;
        } 
        if(n%12==11)
        {
            cout<<n-9<<" "<<"MS"<<endl;
        }
        
    }
}
