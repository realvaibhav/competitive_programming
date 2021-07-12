
#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
 int calling()
 {
    ll x,a,b,ans=0;
     cin >> x ;
     if(x==1)
     {
       cout << "1" << " " << "0" << endl;
     }
     else if(x%2==0)
     {
         cout << x/2 -1 << " " << x/2 + 1 << endl ;
     }
     else
     {
         cout << x/2 << " " << x/2 + 1 << endl ;
     }
     
     return 0 ;
 }

int main()
{
  ll test ; 
  cin >> test ;
  for(ll i=0;i<test;i++)
  {
      calling() ;
  }

    return 0;
}

