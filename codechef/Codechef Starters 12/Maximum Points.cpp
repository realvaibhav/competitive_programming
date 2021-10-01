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
   int time1 , time2 , time3  ;
   cin >> time1 >> time2 >> time3 ;
   int point1 , point2 , point3  ;
   cin >> point1 >> point2 >> point3 ;
   
   if(20*(time1+time2+time3) <= 240)
   {
      cout << 20*(point1+point2+point3) << endl  ;
   }
   else
   {
      int ans=0 ;
      int res=0 ;

      for(int i=0 ; i<=20 ; i++)
      {
         for(int j=0 ; j<=20 ; j++)
         {
            for(int k=0 ; k<=20 ; k++)
            {
               res=time1*i + time2*j + time3*k ;
               if(res<=240)
               {
                  ans=max(ans,(point1*i + point2*j + point3*k)) ;
               }
            }
         }
      }

      cout << ans << endl ;
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