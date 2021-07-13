   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int x1 , x2 , y1 , y2 , z1 , z2 ;
      cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2 ;
      if(x2>=x1 && y2>=y1 && z2<=z1 )
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