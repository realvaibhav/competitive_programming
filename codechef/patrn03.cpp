   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n ;
      cin >> n ;
      for(int i=1 ; i<=n ; i++)
      {
          for(int j=1 ; j<=i ; j++)
          {
              cout << j ;
              int k=j ;
              while(k--)
              {
                 if(i!=j)
                 {
                    cout << "*" ;
                 }
              }
          }
          cout << endl ;
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