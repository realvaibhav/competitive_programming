#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution(ll test)
{ 
   string s ;
   cin >> s ;
   string f ;
   cin >> f ;
   ll count=0  ;
   ll temp=0 ;
   ll x=0 ;
   for(ll i=0 ; i< s.size() ; i++)
   {
       ll res=27  ;
       for(ll j=0 ; j< f.size() ; j++)
       { 
           temp=abs(s[i]-f[j]) ;
           x=26-temp ;
           temp=min(temp,x) ;
           res=min(res,temp) ;
           if(temp==0)
           {
               break  ;
           }
       }

       count+=res ;
   }
   
   cout << "Case #" << test+1 << ": " << count << endl ;
   

   
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