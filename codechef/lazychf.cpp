   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int m , x , d ;
      cin >> x >> m >> d ;
      int ans=0 , res=0  ;
      if((m*x) > (x+d))
      {
          ans=x+d ;
      }
      else
      {
          ans=m*x  ;
      }
      cout << ans << endl ;
      
      
      
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