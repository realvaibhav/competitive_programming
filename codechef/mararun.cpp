   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int a , b , c ;
      int km , days ;
      cin >> days >> km >> a >> b >> c ;
      int res=0 ;
      res=km*days ;
      if(res>=42)
      {
          cout << c << endl ;
      }
      else if(res>=21)
      {
          cout << b << endl ;
      }
      else if (res>=10)
      {
          cout << a << endl ;
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