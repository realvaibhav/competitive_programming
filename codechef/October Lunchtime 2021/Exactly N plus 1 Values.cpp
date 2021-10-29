#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   ll n ;
   cin >> n ;
   ll sum=1 ;
   vector<ll> vec ;
   vec.push_back(1) ;
   for(ll i=1 ; i<n ; i++)
    {
        vec.push_back(i) ;
        sum+=i ;
    }
    ll temp=pow(2,n) ;
    vec.push_back(temp-sum) ;
    for(auto x:vec)
    {
        cout << x << " "  ;
    }
    cout << endl   ;

   
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