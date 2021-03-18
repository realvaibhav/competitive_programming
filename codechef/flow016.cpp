#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


ll gcd(ll a , ll b)
{
    if (a==0)
    {
        return b;
    }
    else
    {
        return gcd(b%a , a) ;
    }
    
}


int main()
{
    
    ll t ; 
    cin >> t ;
    while (t--)
    {
        ll a , b ;
        cin >> a >> b ;
        ll d=max(a,b) ;
        ll res=0 , ans=1 ;
        ans=gcd(a,b) ;
        cout << ans << " " << (a*b)/ans << endl ;

    }
    
    return 0;
}