#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()    
{
   
   ll n , minw , rodw ;
   cin >> n >> minw >> rodw ;
   ll arr[n] ;
   ll sum=0 , ans=0 , res=0 ;
   for (ll i = 0; i < n; i++)
   {
       cin >> arr[i] ;
       sum+=arr[i]  ;
   }
   if (rodw>=minw)
   {
       cout << "YES" << endl ;
   }
   else if( (rodw+sum) < minw )
   {
       cout << "NO" << endl ;
   }
   else
   {
       sort(arr,arr+n) ;
       for(ll i=0 ; i < n-1 ; i=i+2)
       {
           if(arr[i]==arr[i+1])
           {
               res+=arr[i] ;
               ans+=arr[i] ;
           }
       }
       if ((res+ans+rodw)>=minw)
       {
           cout << "YES" << endl ;
       }
       else
       {
           cout << "NO" << endl ;
       }
       
       
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