   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int x , y ;
      cin >> x >> y ;
      int sum=x+y ;
     
      if(sum<6)
      {
          double x=6-sum  ;
          double ans=x/6 ;
          cout << fixed  <<  setprecision(6) << ans << endl ;
      }
      else
      {
          cout << 0 << endl ;
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