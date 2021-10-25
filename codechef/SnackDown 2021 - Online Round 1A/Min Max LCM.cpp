#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solution()
{ 
   ll x , k ;
   cin >> x >> k ;
   ll mn=2*x  ;
   ll temp=x*k  ;
   ll mx=temp*(temp - 1) ;
   cout << mn << " " << mx << endl ;
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