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
   ll arr[n] ;
   ll odd=0 ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
      if(arr[i]%2!=0)
      {
          odd++ ;
      }
   }
   
   if(odd==0 || odd==n)
   {
       cout << "-1" << endl  ;
   }
   else
   {
        ll sum=0 ;
        for(ll i=0 ; i<n-1 ; i++)
        {
            sum+=(abs(arr[i+1]-arr[i]))  ;
        }

        if(sum%2!=0)
        {
            for(ll i=0 ; i<n ; i++)
            {
                cout << arr[i] << " " ;
            }
            cout << "\n" ;
        }
        else
        {
            vector<ll> vec1 , vec2 ;
            for(ll i=0 ; i<n ; i++)
            {
                if(arr[i]%2!=0)
                {
                    vec1.push_back(arr[i]) ;
                }
                else
                {
                    vec2.push_back(arr[i]) ;
                }
            }

            for(auto x:vec1)
            {
                cout << x << " " ;
            }
            for(auto x:vec2)
            {
                cout << x << " " ;
            }
            cout << endl ;
        }
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