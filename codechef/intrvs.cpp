   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define endl "\n"

   int solution()
   {
      ll n , k , zero=0 ;
      cin >> n >> k ;
      ll arr[n] ;
      ll time=0 , solve=0 , count=0 , reject=0 , slow=0 , bot=0  ;
      for (ll i = 0; i <n ; i++)
      {
         cin >> arr[i] ;

         if(arr[i]>k)
         {
            count++ ;
         }
         if(arr[i]>=0)
         {
            solve++ ;
            time+=arr[i] ;
         }
         if(arr[i]>1)
         {
            zero++ ;
         }

      }

      double temp=n , min=0 ;
      min=ceil(temp/2) ;
      
      if(solve<min)
      {
         cout << "Rejected" << endl ;
      }
      else if(count!=0)
      {
         cout << "Too Slow" << endl ;
      }
      else if(solve==n&&zero==0)
      {
         cout << "Bot" << endl ;
      }
      else 
      {
         cout << "Accepted" << endl ;
      }

      return 0;
   }


   int main()
   {
      ll t ;
      cin >> t ;
      for (ll i = 1; i <= t; i++)
      {
         solution() ;
      }

      return 0;
   }