#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;


int main()
{

    ll n ;
    cin >> n  ;
    ll arr[n+1] ;
    ll x=0  ;
    for(ll i=1 ; i<=n ; i++)
    {
        cin >> x  ;
        arr[x]=i  ;
    }
    ll vasya=0 , petya=0  ;
    ll qry ;
    cin >> qry ;
    ll check=0 ;
    for(ll i=1 ; i<=qry ; i++)
    {
        cin >> check  ;
        vasya+=(arr[check]) ;
        petya+=(n-arr[check]+1) ;
    }

    cout << vasya << " " << petya << endl  ;
     
    


    return 0  ;
}

