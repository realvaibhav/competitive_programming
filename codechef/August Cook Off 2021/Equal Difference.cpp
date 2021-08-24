#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

ll solution()
{ 
   ll n ;
   cin >> n ;
   ll arr[n] ;
   for(ll i=0 ; i<n ; i++)
    {
      cin >> arr[i]  ;
    }
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[arr[i]]++ ;
    }
    ll count = 0, res = -1 ;
    for (auto i : m) 
    {
        if (count < i.second) 
        {
            res = i.first;
            count = i.second;
        }
    }
    unordered_multiset<ll> s ;
    for(ll i=0 ; i<n ; i++)
    {
        s.insert(arr[i]) ;
    }
    ll temp=s.count(res) ;
    ll ans=n-temp ;
    if(n==1 || n==2)
    {
        cout << "0" << endl ;
    }
    else
    {
        if(temp==1)
        {
            ans-- ;
            cout << ans << endl ;
        }
        else
        {
            cout << ans << endl ;
        }
    }


   return 0 ;
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


   return 0  ;
}