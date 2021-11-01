#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution(int run)
{
   
   ll n , k , count=0 ;
   cin >> n >> k ;
   string s ;
   cin >> s ;
   ll check=n/2 ;
   for (ll i = 0; i < n; i++)
   {
       if (i<=(check-1))
       {
          if (s[i]!=s[n-1-i])
          {
              count++ ;
          }
          
       }
       
   }
   ll ans=abs(k-count) ;
   if (count>=k)
   {
       cout << "Case #" << run << ": " << ans << endl ;
   }
   else
   {
      
      cout << "Case #" << run << ": " << ans << endl ;

   }
   
   
   

   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    ll run=1 ;
    for (ll i =1; i <=t; i++)
    {
      
      solution(run) ;
      run++ ;

    }
    

    return 0;
}