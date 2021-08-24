#include<bits/stdc++.h>
using namespace std ;
typedef long long ll  ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

ll solution()
{ 
   ll n ;
   cin >> n ;
   ll arr[n] ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }
   ll one=0 ;
   ll minus_one=0 ;
   ll greater_one=0 ;
   for(ll i=0 ; i<n ; i++)
   {
       if(abs(arr[i])>1)
       {
           greater_one++ ;
       }
       if(arr[i]==-1)
       {
           minus_one++ ;
       }
       if(arr[i]==1)
       {
           one++ ;
       }
   }

   if(minus_one>=2 && one==0)
   {
       cout << 0 << endl ;
   }
   else if(greater_one>=2)
   {
       cout << 0 << endl ;
   }
   else if( greater_one==1 && minus_one>0 )
   {
       cout << 0 << endl ;
   }
   else
   {
       cout << 1 << endl ;
   }


   
   return 0 ;
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