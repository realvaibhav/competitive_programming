   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      int arr[5][5] ;
      int x , y ;
      for(int i=0 ; i<5 ; i++)
      {
          for(int j=0 ; j<5 ; j++)
          {
              cin >> arr[i][j] ;
              if(arr[i][j]==1)
              {
                  x=i+1 ;
                  y=j+1 ;
              }
          }
      }
      
      
      cout << abs(x-3) + abs(y-3) << endl ;


      return 0  ;
   }