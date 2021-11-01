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
   ll x   ;
   cin >> x   ;
   if(x==0)
   {
       cout << 1 << endl   ;
   }
   else
   {
       ll temp=log2(x)  ;
       if(floor(log2(x+1))==ceil(log2(x+1)))
       {
           cout << x+1 << endl  ;
       }
       else
       {
           ll ans=pow(2,temp)   ;
           cout << ans << endl  ;
       }
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