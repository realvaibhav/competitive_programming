   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long ll ;
   #define endl "\n" 


   void solve()
   { 
      int n, k  ;
      cin >> n >> k ;
      int arr[k] ;
      for(int i=0; i<k; i++)
      {
         cin >> arr[i] ;
      }
      int a=0 ; 
      int b=0 ;
      for(int i=0; i<k; i++)
      {
         b=arr[i] ;
         for(int j=b ; j>a ; j--)
         {
            cout << j << " " ;
         }
         a=arr[i] ;
      }
      cout << endl ;
   }


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t ;
      cin >> t ;
      for(int i = 0; i < t; i++)
      {
         solve() ;
      }  

      return 0  ;
   }