   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int a , b , c , d ;
      cin >>  a  >> b >> c  >> d ;
      if((a+c==180) && (b+d==180))
      {
          cout << "YES" << endl ;
      }
      else
      {
          cout << "NO" << endl ;
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