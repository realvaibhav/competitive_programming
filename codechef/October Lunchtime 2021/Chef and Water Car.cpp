#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   ll n , v ;
   cin >> n >> v  ;
   ll temp=n*(n-1)  ;
   temp/=2 ;
   if(n==1)
   {
       cout << 0 << " " << 0 << endl ;
   }
   else if(v==1)
   {
       cout << temp <<  " " << temp  << endl ;
   }
   else
   {
       ll fee=1 ;
       ll dis=1 ;
       ll ans=0 ;
       
       if(dis+v<n)
       {
           dis+=v  ;
           ans+=v  ;
           ll diff=n-dis ;
           diff++ ;
           ll sum=diff*(diff+1)  ;
           sum/=2 ;
           sum-- ;
           ans+=sum ;  
       }
       else if(dis+v>=n)
       {
           ans=(n-1) ;
       }
       cout << temp << " " << ans << endl ;
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