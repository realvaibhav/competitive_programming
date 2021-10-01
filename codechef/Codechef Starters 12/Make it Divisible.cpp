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
   
   if(n==1)
   {
       cout << 3 << endl   ;
   }
   else
   {
       cout << 1  ;
       for(int i=1 ; i<=n-2 ; i++)
       {
           cout << 0  ;
       }
       cout << 5 << endl ;
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