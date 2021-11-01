#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution(ll test)
{ 
   ll n , d , c , m  ;
   cin >> n >> d >> c >> m  ;
   string s  ;
   cin >> s  ;
   bool flag=true  ;
   ll count=0 ;
   for(ll i=0 ; i<n ; i++)
   {
       if(s[i]=='D')
       {
           count++ ;
       }
   }
   if(count==0)
   {
       cout << "Case " << "#" << test+1 << ": " << "YES" << endl ;
       return ;
   }
   ll temp=0 ;   
   for(ll i=0 ; i<n ; i++)
   {
       if(s[i]=='D')
       {
           c+=m  ;
           if(d>0)
           {
               d-- ;
           }
           else
           {
               flag=false ;
               break ;
           }
           temp++ ;
           if(temp==count)
           {
               break ;
           }
       }
       else
       {
           if(c>0)
           {
               c-- ;
           }
           else
           {
               flag=false ;
               break ;
           }
       }
   }

   if(flag==true)
   {
       cout << "Case " << "#" << test+1 << ": " << "YES" << endl ;
   }
   else
   {
       cout << "Case " << "#" << test+1 << ": " << "NO" << endl ;
   }




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