   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long ll ;
   #define MAX 1000000
   #define endl "\n" 


   int solution()
   {
      
      int n , k , count=0 , ans=0 , res=0 ;
      string strongls ;
      cin >> n >> k ;
      cin >> strongls ;
      for (int i = 0; i < n; i++)
      {
         if (strongls[i]=='*')
         {
            count++ ;
            res=max(res,count) ;
         }
         else
         {
            count=0 ;
         }
         
         
      }

      if (res<k)
      {
         cout << "NO" << endl ;
      }
      else
      {
         cout << "YES" << endl ;
      }

      
      return 0;
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

      return 0;
   }