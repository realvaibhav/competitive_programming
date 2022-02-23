#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n , k ;
   cin >> n >> k ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
       arr[i]=i+1 ;
   }
   if(n==k)
   {
        for(int i=0 ; i<n ; i++)
        {
            cout << arr[i] << " " ;
        }
   }
   else if(k==n-1)
   {
       swap(arr[0],arr[n-1]) ;
       for(int i=0 ; i<n ; i++)
       {
            cout << arr[i] << " " ;
       }
   }
   else
   {
       arr[n-1]=arr[k] ;
       for(int i=k ; i<n-1 ; i++)
       {
           arr[i]+=1 ;
       }

        for(int i=0 ; i<n ; i++)
        {
            cout << arr[i] << " " ;
        }
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