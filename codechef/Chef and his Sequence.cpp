#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
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
        cin  >> arr[i] ;
    }
    ll m ;
    cin >> m ;
    ll sub_sequence[m] ;
    for(ll i=0 ; i<m ; i++)
    {
        cin  >> sub_sequence[i] ;
    }
    vector<ll> vec ;
    ll temp=0 ;
    ll count=0 ;
    for(ll i=0 ; i<m ; i++)
    {
        temp=sub_sequence[i] ;
        for(ll j=0 ; j<n ; j++)
        {
            if(temp==arr[j])
            {
                count++ ;
                vec.push_back(j) ;
                break ;
            }
        }
    }
    if(count<m)
    {
        cout << "No" << endl ;
        return 0 ;
    }
    else
    {
        ll len=vec.size() ;
        for(ll i=0 ; i<len-1 ; i++)
        {
            if(vec[i]>vec[i+1])
            {
                cout << "No" << endl ;
                return 0 ;
            }
        }

    // else this statement will runs 
        cout << "Yes" << endl ;
        return 0 ;
    }

        
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