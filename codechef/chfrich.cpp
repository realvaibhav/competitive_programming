   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int ans=0 , res=0 ;
      int a , b , x ;
      cin >> a >> b >> x ;
      res=(b-a)%x  ;
      ans=(b-a)/x  ;
      if(res==0)
      {
          cout << ans << endl ;
      }
      else
      {
          cout << ans+1 << endl ;
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