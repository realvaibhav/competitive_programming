   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n,m ;
      cin >> n >> m ;
      int arr1[n] , arr2[m]  ;
      multiset<int> s1 , s2  ;
      vector<int> vec  ;  
      int value=0 , k=0 , ans=0 , res=0 ;
      for(int i=0 ; i<n ; i++)
      {
          cin >> arr1[i] ;
      }
      for(int i=0 ; i<m ; i++)
      {
         cin >> arr2[i] ;
      }
      k=min(n,m) ;
      if(k==n)
      {

        for(int i=0 ; i<k ; i++)
        {
            res=count(arr1,arr1+n,arr1[i]) ;
            ans=count(arr2,arr2+m,arr1[i]) ;
          
           
            if((res==ans) && (res==1))
            {

                if(arr1[i]%3==0)
                {
                      vec.push_back(arr1[i]) ;
                }

            }

        }

      }
      else
      {
          for(int i=0 ; i<k ; i++)
          {
            res=count(arr2,arr2+m,arr2[i]) ;
            ans=count(arr1,arr1+n,arr2[i]) ;
          
           
            if((res==ans) && (res==1))
            {
                
                if(arr2[i]%3==0)
                {
                      vec.push_back(arr2[i]) ;
                }

            }

          }
      }
      
      sort(vec.begin(),vec.end()) ;

      if(vec.size()==0)
      {
          cout << "-1" << endl ;
      }
      else
      {
            for(auto x:vec)
            {
               cout << x << " "  ;
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