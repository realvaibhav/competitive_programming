   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution(int t)
   {
      int n ;
      cin >> n ;
      int count=0 ;
      int sum=0 , res=0 , ans=0 ;
      for(int i=1 ; i<=n ; i++)
      {
         sum=0 ;
         res=0 ;
         while(sum<n)
         {
            sum+=i ;
            sum+=res ;
            res++ ;
         }
         if(sum==n)
         {
            count++ ;
         }
      }
      cout << "Case #" << t+1 << ": " << count << endl ;
      
      
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
         solution(i) ;
      }

      return 0  ;
   }