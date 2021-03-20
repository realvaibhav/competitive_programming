#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int solution()
{
   ll n,sum=0; 
   
   cin >> n ;
   n=n-1 ;
   ll d=n/3 ;
   ll p=n/5 ;
   ll r=n/15 ;
   
   sum = ( (d*(6 + (d-1)*3)/2) + (p*(10 + (p-1)*5)/2) - (r*(30 + (r-1)*15)/2) ) ;

   cout << sum << "\n" ;

   return 0;

}

int main()
{
    ll t;
    cin >> t ;
    for ( ll i = 0 ; i < t ; i++ )
    {
       solution() ;
    }
    
    return 0; 

}
                                  
