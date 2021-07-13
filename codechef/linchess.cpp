#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n , k , check=0 , res=0 , ans=-1;
   cin >> n >> k  ;
   ll arr[n] ;
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i] ;
   }
   sort(arr,arr+n) ;
   check=k ;
   for (int i = 0; i < n; i++)
   {
       if ((arr[i]<k)&&(k%arr[i]==0))
       {
           res=k/arr[i] ;
           if (res<=check) // equal to sign is for arr[i]=1 
           {
               check=res ;
               ans=arr[i] ;
           }
           
       }
       
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