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
   ll x , y ;
   cin >> x >> y ;

   ll sum=x+y ;
   sum=abs(sum) ;
   if(sum%2==0)
   {
       cout << "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
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