#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


ll gcd(ll a , ll b)
{
    if (a==0)
    {
        return b;
    }
    else
    {
        return gcd(b%a , a) ;
    }
    
}

ll checksum(ll res)
{
    ll r=0 , sum=0 ;
    while (res!=0)
    {
       r=res%10 ;
       sum+=r ;
       res=res/10 ;
    }
    return sum ;
}

int solution()
{
   
   ll n ;
   cin >> n ;
   
   ll sum=checksum(n);
   ll ans=gcd(n , sum) ;
   if (ans>1)
   {
       cout << n << endl ;
   }
   else
   {
       ll check=1 ;
       ll super=0 ;

       while (check==1)
       {
           n++ ;
           super=checksum(n) ;
           check=gcd(n ,super) ;
       }
       cout << n << endl ;
       
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