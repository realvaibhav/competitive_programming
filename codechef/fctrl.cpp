   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      ll n ;
      cin >> n ;
      int ans=0 , res=0 ;
      while(n>0)
      {
          res=n/5 ;
          ans+=res ;
          n=n/5 ;
      }
      cout << ans << endl ;


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