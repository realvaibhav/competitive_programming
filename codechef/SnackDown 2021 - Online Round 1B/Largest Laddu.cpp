#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   ll n ;
   cin >> n ;
   ll num=pow(2,n) ;
   ll arr[num] ;
   for(ll i=0 ; i<num ; i++)
   {
      cin >> arr[i]  ;
   }
   
   if(n==0)  // meaning chef has only one laddu ( as 2^0==1 )
   {
       cout << "YES" << endl ;
   }
   else
   {
       sort(arr,arr+num) ;
       ll a=arr[0] ;
       ll b=arr[num-1] ;
       if( (b-a) > 1 )
       {
           cout << "NO" << endl ;
       }
       else  //   (b-a) <= 1
       {
           cout << "YES" << endl ;
       }
   }
   

   
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