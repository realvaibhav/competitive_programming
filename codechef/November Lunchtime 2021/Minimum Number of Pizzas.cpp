#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   ll n , k ;
   cin >> n  >> k  ;

   if(n>=k)
   {
       if(n%k==0)
       {
           cout << n/k << endl  ;
       }
       else
       {
           ll temp=__gcd(n,k) ;
           ll lcm=(n*k)/temp  ;
           cout << lcm/k << endl ;
       }
   }
   else
   {
       ll temp=__gcd(n,k) ;
       ll lcm=(n*k)/temp  ;

       cout << lcm/k << endl ;
   }
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solution() ;
   }  


   return 0  ;
}