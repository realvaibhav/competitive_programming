#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   int arr[n] ;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   int a=0 ;
   int b=0 ;
   int temp=0 ;
   bool flag=false ;
   for(int i=0; i<n; i++)
   {
      if(arr[i]!=i+1)
      {
         a=i ;
         temp=i+1 ;
         break ;
      }
   }
   for(int i=0; i<n; i++)
   {
      if(arr[i]==temp)
      {
         b=i ; 
         break ;
      }
   }

   while(a<b)
   {
      swap(arr[a],arr[b]) ;
      a++ ;
      b-- ;
   }
   
   for(int i=0; i<n; i++)
   {
      cout <<  arr[i] << " " ;
   }

   cout << endl ;

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for(int i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}