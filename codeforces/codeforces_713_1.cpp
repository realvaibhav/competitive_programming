#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i < n; i++)
   {
       cin >> arr[i] ;
   }
   
   ll d=arr[0] ;

   if (arr[0]!=arr[1]&&arr[1]==arr[2])
   {
       cout << 1 << endl ;
   }
   else if (arr[0]!=arr[1]&&arr[0]==arr[2])
   {
       cout << 2 << endl ;
   }
   
   else
   {
       for (ll i = 0; i < n; i++)
       {
           if (d!=arr[i])
           {
               cout << i+1 << endl;
               break ;
           }
           
       }
       
   }
   
   
   
   
   
   
   
   
   
   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}