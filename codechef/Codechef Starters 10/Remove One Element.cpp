#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

int solution()
{ 
   ll n ;
   cin >> n ;
   ll len=n-1 ;
   ll arr[n] ;
   ll bob[len] ;
   unordered_set<ll> s ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
      s.insert(arr[i]) ;
   }
   for(ll i=0 ; i<len ; i++)
   {
      cin >> bob[i] ;
   }
   
   sort(arr,arr+n) ;
   sort(bob,bob+len) ;

   ll x1=bob[0] - arr[1] ;
   ll x2=bob[0] - arr[0] ;

   ll count1=0 , count2=0 ;

   for(ll i=0 ; i<len ; i++)
   {
      if( (bob[i]-x1) > 0 && (s.count(bob[i]-x1)!=0) )
      {
         count1++ ;
      }
   }
   for(ll i=0 ; i<len ; i++)
   {
      if( (bob[i]-x2) > 0 && (s.count(bob[i]-x2)!=0) )
      {
         count2++ ;
      }
   }

   if(x1<=0)
   {
      cout << x2 << endl ;
   }
   else if (x2<=0)
   {
      cout << x1 << endl ;
   }
   else
   {
      if(count1==len && count2==len)
      {
         cout << min(x1,x2) << endl ;
      }
      else if(count1==len)
      {
         cout << x1 << endl ;
      }  
      else if(count2==len)
      {
         cout << x2 << endl ;
      }
   }
      

   

   return 0 ;
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
