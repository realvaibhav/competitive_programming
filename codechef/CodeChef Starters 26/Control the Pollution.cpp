#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n,x,y  ;
   cin >> n >> x >> y  ;
   if(n<=4)
   {
      cout << min(x,y) << endl ;
   }
   else if(n>4 && n<=100)
   {
      int r=0 ;
      if(n%4==0)
      {
         r=n/4 ;
      }
      else
      {
         r=(n/4)+1 ;
      }

      cout << min(x,r*y) << endl ;
   }
   else
   {
      int ans=0 , res=0 ;
      int temp=0 , cost=0 ;
      int p1=0 ;
      if(n%100==0)
      {
         p1=n/100 ;
      }
      else
      {
         p1=(n/100)+1 ;
      }
      ans=p1*x ;
      int p2=0 ;
      if(n%4==0)
      {
         p2=n/4 ;
      }
      else
      {
         p2=(n/4)+1 ;
      }
      res=p2*y ;
      int v=n%100 ;
      int p3=0 ;
      if(v%4==0)
      {
         p3=v/4 ;
      }
      else
      {
         p3=(v/4)+1 ;
      }
      temp=(n/100)*x+p3*y ;
      cost=25*(n/100)*y+x ;
      
      // cout << ans << " " << res << " " << temp << " " << cost << endl ;

      ans=min(ans,res) ;
      temp=min(temp,cost) ;

      cout << min(ans,temp) << endl ;

   }

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for(int i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}