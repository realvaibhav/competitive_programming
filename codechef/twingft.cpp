   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      ll n , k ;
      cin >> n >> k ;
      ll arr[n] ;
      for(ll i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      sort(arr,arr+n,greater<int>()) ;
      ll res1=0 , res2=0, count1=1 , count2=1  ;
      for(ll i=0 ; i<n ; i=i+2)
      {
          if(count1<=k)
          {
              res1+=arr[i] ;
          }
          else
          {
              break ;
          }
          count1++  ;
          
      }
      for(ll i=1 ; i<n ; i=i+2)
      {
          if(count2<k)
          {
              res2+=arr[i] ;
          }
          else if(count2==k)
          {
              res2=res2+arr[i]+arr[i+1] ;
          }
          else
          {
              break ;
          }
          count2++  ;
          
      }
      cout << max(res1,res2) << endl ;
      
   
      
      return 0  ;
   }

 
   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      ll t ;
      cin >> t ;
      for (ll i = 0; i < t; i++)
      {
         solution() ;
      }

      return 0  ;
   }