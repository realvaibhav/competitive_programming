   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int a , b , c ;
      cin >> a >> b >> c ;
      int res1=a+b ;
      int res2=b+c ;
      int res3=c+a ;
      if(res1>=res2 && res1>=res3)
      {
          cout << res1 << endl ;
      }
      else if(res2>=res1 && res2>=res3)
      {
          cout << res2 << endl ;
      }
      else
      {
          cout << res3 << endl ;      
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