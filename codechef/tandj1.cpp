   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      ll a,b , c, d , k ;
      cin >> a >> b >> c >> d >> k ;
      ll res=abs(c-a)+abs(d-b)  ;
      if(res==k)
      {
          cout << "YES" << endl ;
      }
      else if(res>k)
      {
          cout << "NO" << endl ;
      }
      else
      {
          ll ans=k-res ;
          if(ans%2==0)
          {
              cout << "YES" << endl ;
          }
          else
          {
              cout << "NO" << endl ;
          }
          
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