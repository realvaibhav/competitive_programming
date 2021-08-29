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
   cin >> n  ;
   ll arr[n]  ;
   ll res=0 ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
      res=max(res,arr[i]) ;
   }
   if(res!=arr[0])
   {
       cout << "-1" << endl ;
   }
   else
   {
       ll temp=0 ;
       ll count=0 ;
       for(ll i=n-1 ; i>=1 ; i--)
       {
           if(arr[i]>temp)
           {
               temp=arr[i] ;
               count++ ;
           }
       }

       cout << count << endl  ;
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