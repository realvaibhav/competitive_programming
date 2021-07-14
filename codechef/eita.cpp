   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int d , x , y , z ;
      cin >> d >> x >> y >> z ;
      int res1=x*7 ;
      int res2=d*y + (7-d)*z  ;

      cout << max(res1,res2) << endl  ;
      
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