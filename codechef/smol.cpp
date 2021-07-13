#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
    ll n , k ;
    cin >> n >> k ;
   
   if (k!=0)
   {
           cout << (n%k) << endl ;
   }
   else
   {
       cout << n << endl ;
   }
   
   
   

   return 0;
}


int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}