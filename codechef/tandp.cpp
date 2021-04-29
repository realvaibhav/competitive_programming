#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   int n , m ;
   cin >> n >> m ;

   int tx , ty , px , py ;
   cin >> tx >> ty ;
   cin >> px >> py ;

   int ans=0 , res=0 ;
   
   ans=(n-tx)+(m-ty) ;
   res=max((n-px),(m-py))  ;

   if (ans<=res)
   {
       cout << "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
   }
   

   return 0  ;
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