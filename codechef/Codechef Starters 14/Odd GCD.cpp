#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

void solution()
{ 
   ll n ;
   cin >> n ;
   ll arr[n] ;
   ll four=0 ;
   ll eight=0 ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
      if(arr[i]%4==0)
      {
          four++    ;
      }
   }
   ll num=arr[0] ;
   for(ll i=1 ; i<n ; i++)
   {
      num=__gcd(num,arr[i])  ;
   }
   if(num%2!=0)
   {
       cout << 0 << endl ;
   }
   else
   {
       ll count=0 ;
       while(num%2==0)
       {
           num=num/2  ;
           count++ ;
       }

       cout << count << endl ;
   }
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