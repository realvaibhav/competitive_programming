#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

ll solution(ll test)
{ 
   ll n ;
   cin >> n ;
   string s ;
   cin >> s ;
   vector<ll> vec  ;
   vector<ll> arr  ;
   
   for(ll i=0 ; i<n ; i++)
   {
       if(s[i]=='1')
       {
           vec.push_back(i) ;
       }
   }
   ll ans=0 , temp=0 , pos=-1 , res=0 ;
   ll count=0 ;
   for(ll i=0 ; i<n ; i++)
   {
       if(s[i]=='1')
       {
           pos=i ;
           count++ ;
       }
       else
       {
           if(pos!=-1)
           {
               res=abs(i-pos) ;

               for(ll j=count ; j<vec.size() ; j++)
               {
                   temp=abs(vec[j]-i) ;
                   if(temp<res)
                   {
                       res=temp ;
                   }
                   else if(temp>res)
                   {
                       break ;
                   }
               }
               
               ans+=res ;
           }
           else
           {
               res=abs(vec[0] - i) ;
               ans+=res ;
           }
       }
   }
   

   cout << "Case #" << test+1 << ": " << ans << endl ;




   

   
   return 0 ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (ll i = 0; i < t; i++)
   {
      solution(i) ;
   }


   return 0  ;
}