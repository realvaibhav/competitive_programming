#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n , ans=0 ;
   cin >> n ;
   while (n>0)
   {
       if (n>=100)
       {
           n-=100 ;
           ans++ ;
       }
       else if (n>=50&&n<100)
       {
           n-=50 ;
           ans++ ;
       }
       else if (n>=10&&n<50)
       {
           n-=10 ;
           ans++ ;
       }
       else if (n>=5&&n<10)
       {
           n-=5 ;
           ans++ ;
       }
       else if (n>=2&&n<5)
       {
           n-=2 ;
           ans++ ;
       }
       else
       {
           n-=1 ;
           ans++ ;
       }
       
   }
   
   cout << ans << endl ;
   
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