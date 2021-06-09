#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()    
{
   
   ll n ;
   cin >> n ;
   if(n%2==0 && (ceil(double(sqrt(n/2)))==floor(double(sqrt(n/2)))))
   {
      cout << "YES" << endl ;
   }
   else if (n%4==0 && (ceil(double(sqrt(n/4)))==floor(double(sqrt(n/4)))))
   {
      cout << "YES" << endl ;
   }
   else
   {
      cout << "NO" << endl ;
   }
   
   
   return 0  ;
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