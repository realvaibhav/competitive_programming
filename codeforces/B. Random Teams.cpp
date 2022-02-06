
// Codeforces Round #273 (Div. 2)
// Random Teams 

#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


int main()
{
    ll n,m ;
    cin >> n >> m ;

    if(n==1) // if n==1 and m==1 
    {
        cout << 0 << " " << 0 << endl ;
        return 0 ;
    }

    ll temp=n-(m-1) ;
    ll mx=temp*(temp-1) ;
    mx/=2 ;

    ll divide=n/m ;
    ll mod=n%m ;

    ll x=m-mod ;
    temp=divide*(divide-1) ;
    temp/=2 ;
    x*=temp ;

    ll y=divide+1 ;
    temp=y*(y-1) ;
    temp/=2 ;
    mod*=temp ;

    ll mn=x+mod ;

    cout << mn << " " << mx << endl ;

    return 0 ;
}
