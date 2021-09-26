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
   int n , p , x , y;
   cin >> n >> p >> x >> y ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }
   int sum=0 ;
   for(int i=0 ; i<p ; i++)
   {
       if(arr[i]==1)
       {
           sum+=y ;
       }
       else
       {
           sum+=x ;
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