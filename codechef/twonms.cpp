#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll a=1 , b=1 , n=1 ;
   cin >> a >> b >> n ;
   ll alice=a , bob=b ;
   ll m=1000000007 ;
   
   if(n%2!=0)
   {
       alice*=2 ;
       cout << max(alice,bob)/min(alice,bob) << endl ;
   } 
   else
   {
       cout << max(alice,bob)/min(alice,bob) << endl ;
   }
   
   
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