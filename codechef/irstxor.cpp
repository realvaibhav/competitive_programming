#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
    ll n ;
    cin >> n ;
    ll d=n ;
    ll res=0 , ans=0 , pos=0 , count=0 ;
    
    while (n!=1)
    {
       res=n%2;
       n=n/2 ;
       if (res==0)
       {
           count=pow(2,pos) ;
           ans+=count ;
           
       }
       pos++ ;
    }

    ans+=pow(2,pos) ;
    cout << ans*(ans^d) << endl ;
    
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}