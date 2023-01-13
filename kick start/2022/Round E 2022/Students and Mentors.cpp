#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(ll test)
{
    ll n ;
    cin >> n ;
    ll arr[n] ;
    ll temp[n] ;
    unordered_multiset<ll> s ;
    for(ll i=0; i<n ; i++)
    {
      cin >> arr[i] ;
      temp[i]=arr[i] ;
      s.insert(arr[i]) ;
    }
    vector<ll> vec ;
    sort(temp,temp+n) ;
    for(ll i=0; i<n ; i++)
    {
      ll ele=arr[i] ;
      ll num=2*arr[i] ;

      if(arr[i]==temp[n-1])
      {
        vec.push_back(temp[n-2]) ;
      }
      else
      {
        ll pos=-1 ;
        ll ans=0 ;
        ll low=0, high=n-1 ;
        bool flag=false ;
        while(low<=high)
        {
          ll mid=low+((high-low)/2) ;
          if(temp[mid]==num)
          {
            flag=true ;
            ans=num ;
            break ;
          }
          else if(temp[mid]>num)
          {
            high=mid-1 ;
          }
          else
          {
            low=mid+1 ;
          }
        }

        if(flag==false)
        {
          ans=temp[high] ;
          if(s.count(arr[i])==1 && ans==arr[i])
          {
            if(high==0)
            {
              ans=-1 ;
            }
            else
            {
              ans=temp[high-1] ;
            }
          }
        }
        
        vec.push_back(ans) ;
      }
    }

    cout << "Case #" << test << ": "   ;
    for(auto x:vec)
    {
      cout << x << " " ;
    }

    cout << endl ;
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
