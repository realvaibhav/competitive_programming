   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int n , d , risk_level  ;
      cin >> n  >> d >> risk_level  ;
      int arr[n] ;
      for(int i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      int water_level=0 ;
      for(int i=0 ; i<n ; i++)
      {
          if(arr[i]==0)
          {
              if(water_level>=d)
              {
                  water_level-=d ;
              }
              else
              {
                  water_level=0 ;
              }
          }
          else  // arr[i]>0
          {
              water_level+=arr[i] ;
          }

          if(water_level>risk_level)
          {
              cout << "YES" << endl ;
              return 0 ;
          }
      }
      
      cout << "NO" << endl ;


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