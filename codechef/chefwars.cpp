#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   int h,p ;
   cin >> h >> p ;
   while (true)
   {
      if (h>0&&p>0)
      {
         h-=p ;
         if (h>0)
         {
            p=floor(p/2) ;
         }
         
      }
      else
      {
          break ;
      }
      
      
   }

   if (h<=0)
   {
       cout << 1 << endl ;
   }
   else
   {
       cout << 0 << endl ;
   }
   

   return 0;
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

    return 0;
}