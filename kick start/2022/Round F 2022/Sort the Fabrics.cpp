#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(ll test)
{
    ll n ;
    cin >> n ;
    string color[n];
    ll dura[n], id[n] ;
    vector<pair<string,ll>> vec ;
    vector<pair<ll,ll>> vec2 ;
    for(ll i=0; i<n ; i++)
    {
      cin >> color[i] >> dura[i] >> id[i] ;
      vec.push_back({color[i],id[i]}) ;
      vec2.push_back({dura[i],id[i]}) ;
    }
    sort(vec.begin(),vec.end()) ;
    sort(vec2.begin(),vec2.end()) ;
    ll count=0 ;
    for(ll i=0; i<n ; i++)
    {
      if(vec[i].second==vec2[i].second)
      {
        count++ ;
      }
    }

    cout << "Case #" << test << ": "  << count << endl ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
