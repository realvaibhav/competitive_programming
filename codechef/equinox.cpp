#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   ll  n , a , b   ;
   cin >> n >> a >> b ;
   string s ;
   ll  sar=0 , anu=0 ;
   for (ll i = 0; i < n; i++)
   {
       cin >> s ;
       if ( s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X' )
       {
           sar+=a ;
       }
       else
       {
           anu+=b ;
       }
   }
   
   if (sar>anu)
   {
       cout << "SARTHAK" << endl ;
   }
   else if (anu>sar)
   {
       cout << "ANURADHA" << endl ;
   }
   else
   {
       cout << "DRAW" << endl ;
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