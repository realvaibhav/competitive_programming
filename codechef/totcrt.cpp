   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n ;
      cin >> n ;
      int len=3*n ;
      string s ;
      int x=0 , r=0  , count=0;
      int arr[len] ;
      vector<int> vec  ;
      string str[len] ;
      map<string , int > mp ;
      string code ;
      int rating ;
      for(int i=0 ; i<len ; i++) 
      {
          cin >> code >> rating ; 
          mp[code] += rating ;
      }
      for(auto &e :mp)
      {
          vec.push_back(e.second);
      }
      sort(vec.begin(), vec.end());
      for(int i=0 ; i<vec.size() ; i++)  
      {
          cout << vec[i] << " "  ;
      } 
      cout << endl  ;


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