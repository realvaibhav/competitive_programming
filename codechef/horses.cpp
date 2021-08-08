   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      ll n ;
      cin >> n ;
      ll arr[n] ;
      for(ll i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      sort(arr,arr+n) ;
      int ans=arr[1]-arr[0] ;
      for(ll i=0 ; i<n-1 ; i++)
      {
          ll temp=arr[i+1]-arr[i] ;
          if(temp<ans)
          {
              ans=temp ;
          }
      }
      cout << ans << endl  ;

      

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