#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   int base ;
   cin >> base ;
   int res=0 , ans=0 ;

   while (base>2)
   {
       res=base/2 ;
       ans+=(res-1) ;
       base-=2 ;
   }
   
   cout << ans << endl ;
   
   
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