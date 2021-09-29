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
   int n ;
   cin >> n ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }
   int res=arr[0] ; 
   int sum=arr[0] ;
   for(int i=1 ; i<n ; i++)
   {
       if(res>0) // res >= 1
       {
           sum+=arr[i] ;
           res-- ;
           res+=arr[i] ;
       }
       else // res==0
       {
           break ;
       }
   }

   cout << sum << endl ; 
   

   
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