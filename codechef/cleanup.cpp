   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int n , m ;
      cin >> n >> m ;
      int arr1[n]={0} ;
      int arr2[m] ;
      for(int i=0 ; i<m ; i++)
      {
         cin >> arr2[i]  ;
         arr1[arr2[i]-1]=1 ;
      }
      vector<int> chef , assistant ;
      int x=0 ;
      for(int i=0 ; i<n ; i++)
      {
          if(arr1[i]==0 && x==0)
          {
              chef.push_back(i+1) ;
              x=1 ;
          }
          else if(arr1[i]==0 && x==1)
          {
              assistant.push_back(i+1) ;
              x=0 ;
          }
          else
          {
              continue ;
          }
      }
    for(auto k:chef)
    {
        cout << k << " " ;
    }
    cout << endl ;
    for(auto k:assistant)
    {
        cout << k << " " ;
    }
    cout << endl ;
      

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