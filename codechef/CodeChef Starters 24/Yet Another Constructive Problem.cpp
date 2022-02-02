#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   ll n  ;
   cin >> n  ;

   if(n==1)
   {
       cout << 0 << " " << 1 << " " << 3 << endl ;
   }
   else if(n==2)
   {
       cout << 2 << " " << 3 << " " << 4 << endl ;
   }
   else
   {
       if(n%2==0)
       {
           cout << n << " " << n+1 << " " << n+2 << endl ;
       }
       else
       {
           cout << n-2 << " " << n-1 << " " << n << endl ;
       }
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