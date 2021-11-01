   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 

   int gcd(int a , int b )
   {
        if (a==b)
        {
            return a;
        }
        if (a>b)
        {
            return gcd(a-b,b);
        }
        if (a<b)
        {
            return gcd(a,b-a) ;
        }
   }


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
      int ans=arr[0] ;
      for(int i=1 ; i<n ; i++)
      {
          if(ans==1)
          {
              break ;
          }

          ans = gcd(ans,arr[i]) ;  // finding gcd 
      }
      arr[n-1]=ans ;
      ll sum=0 ;
      for(ll i=0 ; i<n ; i++)
      {
          sum+=(arr[i]/ans) ;
      }
      
      cout  << sum << endl  ;

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