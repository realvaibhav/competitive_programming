#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   int n,k  ;
   cin >> n >> k ;
   int arr[n] ;
   for (int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }

   int i=0  ;
   while(k>0)
   {
      if(i==n-1)
      {
         break ;
      }
      
      if(arr[i]>0)
      {
         arr[i]-=1 ;
         arr[n-1]+=1 ;
         k-- ;
      }
      else
      {
         i++ ;
      }
   }

   for (int i=0; i<n; i++)
   {
      cout << arr[i] << " " ;
   }
   cout << endl ;
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