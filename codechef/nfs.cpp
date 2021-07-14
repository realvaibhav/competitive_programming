#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   double u , v  , a ,  s ;
   cin >> u >> v >> a >> s ;

   double check=0 , res=0 ;
   check=(u*u)-2*a*s ;
   res=sqrt(check) ;
   if (u<=v)
   {
       cout << "Yes" << endl ;
   }
   else
   {
        if (res>v)
        {
            cout << "No" << endl ;
        }
        else
        {
            cout << "Yes" << endl ;
        }
   
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