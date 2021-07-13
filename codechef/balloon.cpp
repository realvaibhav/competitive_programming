   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n ;
      cin >> n ;
      int arr[n] ;
      for(int i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      if(n==7)
      {
          cout << "7" << endl ;
      }
      else
      {
          int count=0 , sum=0 ;
          for(int i=0 ; i<n ; i++)
          {
              if(sum<28)
              {
                  if(arr[i]<=7)
                  {
                      sum+=arr[i] ;
                  }
                  count++ ;
              }
              else
              {
                  break ;
              }
          }

          cout << count << endl ;
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