   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      ll n ;
      ll ans=0 , res=0 , count=0 , k=0 ;
      cin >> n >> k ;
      ll arr[n] ;
      for(ll i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      
      for(ll i=1 ; i<=k ; i++)
      {
         res=0 ;
         for(ll j=0 ; j<n ; j++)
         {
            if(i%arr[j]==0)
            {
               res++ ;
            }
         }
         if(res==n)
         {
            ans=i ;
            break ;
         }

      }

      if(ans==0)
      {
         cout << 0 << endl ;
      }
      else
      {
         cout << (k/ans) << endl ;
      }
      
      
      return 0  ;
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

      return 0  ;
   }