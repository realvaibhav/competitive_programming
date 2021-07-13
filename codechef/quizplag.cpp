   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n,m,k  ;
      cin >> n >> m >> k   ;
      int arr[k]  ;
      vector<int> vec  ;
      set<int> s  ;
      for(int i=0 ; i < k ; i++ )
      {
          cin >> arr[i]  ;
      }
      int ans=0 , res=0 , count=0  ;
      sort(arr,arr+k) ;
      for(int i=0 ; i < k-1 ; i++)
      {
          if((arr[i]==arr[i+1]) && (arr[i]<=n) )
          {
              s.insert(arr[i])  ;
          }
      }


      
      if(s.size()==0)
      {
          cout << 0 << endl ;
      }
      else
      {
          cout << s.size() << " " ;
          for(auto x:s)
          {
              cout << x << " " ;
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