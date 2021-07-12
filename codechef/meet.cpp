#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define endl "\n" 


int solution()
{
   
   string s ;
   int hr=0,mom=0 ;
   char c ;
   scanf("%d%c%d",&hr,&c,&mom) ;
   cin >> s ;

   int n ;
   cin >> n ;
   
   if (s=="AM")
   {
      if (hr==12)
      {
         hr=0;
      }
   }
   else
   {
      if (hr!=12)
      {
         hr+=12 ;
      }
      
   }
   
   mom=(hr*60)+mom ;
   
   for (int i = 0; i < n; i++)
   {
      
       string left , right ;
       int hr1=0 , mom1=0 , hr2=0 , mom2=0 ;
       char c1 , c2 ;
       scanf("%d%c%d",&hr1,&c1,&mom1) ;
       cin >> left ;
       scanf("%d%c%d",&hr2,&c2,&mom2) ;
       cin >> right ;

      if (left=="AM")
      {
      if (hr1==12)
      {
         hr1=0;
      }
     }
     else
     {
      if (hr1!=12)
      {
         hr1=hr1+12 ;
      }
      
     }
     if (right=="AM")
     {
      if (hr2==12)
      {
         hr2=0;
      }
     }
     else
     {
      if (hr2!=12)
      {
         hr2=hr2+12 ;
      }
      
     }
     
     mom1=(hr1*60)+mom1 ;
     mom2=(hr2*60)+mom2 ;

      if ((mom>=mom1)&&(mom<=mom2))
      {
         cout << 1  ;
      }
      else
      {
         cout << 0  ;
      }

   }
   
   cout << endl ;
   return 0;
}


int main()
{
    int t ;
    cin >> t ;
    for (int i = 1; i <= t; i++)
    {
       solution() ;
    }

    return 0;
}