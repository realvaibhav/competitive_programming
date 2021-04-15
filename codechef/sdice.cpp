#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   ll n ;
   cin >> n ;
   ll ans=0 , check=0 , res=0 ;

   if(n<=4)
   {

       if (n==1)
       {
       cout << 20 << endl ;
       }
       else if (n==2)
       {
       cout << 36 << endl ;
       }
       else if (n==3)
       {
       cout << 51 << endl ;
       }
       else
       {
       cout << 60 << endl ;
       }

   }
   else
   {
       check=n/4 ;

       if (n%4==1)
       {
             ans=60+(check-1)*44 + 16 ;
       }
       else if (n%4==2)
       {
           ans=60+(check-1)*44 + 28 ;
       }
       else if (n%4==3)
       {
           ans=60+(check-1)*44 + 39 ;
       }
       else
       {
           ans=60+(check-1)*44  ;
       }
       
       cout << ans << endl ;
       
       
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