#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   ll n  ;
   cin >> n  ;
   ll arr[n] ;
   ll temp[n] ;
   for(ll i=0; i<n; i++)
   {
      cin >> arr[i]  ;
      temp[i]=arr[i] ;
   }
   ll count=0 ;
   for(ll i=1 ; i<n-1 ; i++)
   {
       if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
       {
           if(((i+2)<n)&&(arr[i+1]<arr[i+2]))
           {   
                arr[i+1]=max(arr[i],arr[i+2]) ;
                count++ ;
           }
           else
           {
               arr[i]=max(arr[i-1],arr[i+1]) ;
               count++ ;
           }
       }
   }

   cout << count << endl ;
   for(ll i=0 ; i<n ; i++)
   {    
       cout << arr[i] << " " ;
   }
   cout << endl ;
   
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for(ll i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}