#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n, d=0 , ans=0 , res=0 , count=0 ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i < n; i++)
   {
        cin >> arr[i] ;   
   }

   sort(arr,arr+n) ;
   
   for (ll i = 0; i < n; i++)
   {
      d=i+1 ;
        if (arr[i]<d)
        {
           res=d-arr[i] ;
           count+=res ;
        }
        else if (arr[i]>d)
        {
           ans++ ;
        }
        
   }
   
   if (ans==0)
   {
      if (count%2==0)
      {
      cout << "Second" << endl ;
      }
      else
      {
      cout << "First" << endl ;
      }
   }
   else
   {
        cout << "Second" << endl ;
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