#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
    ll n,k ;
    cin >> n >> k ;

    if(n==1)
    {
        cout << 1 << endl ;
        return ;
    }

    if(k==1) 
    {
       cout << "-1" << endl ;
    }
    else
    {ll temp=0 ;
       ll i=1 ;
       while(temp<k-1)
       {
          cout << i << " " ;
          i++ ;
          temp++ ; 
       }
       for(ll j=n ; j>=i ; j--)
       {
          cout << j << " " ;
       }
       cout << endl ;
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
      solve() ;
   }  

   return 0  ;
}