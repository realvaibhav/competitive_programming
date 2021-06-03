   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      string s ;
      cin >> s ;
      int count=0 ;
      for(int i=0 ; i<s.size() ; i++)
      {
          if(s[i]!='7' && s[i]!='3')
          {
              cout << "BETTER LUCK NEXT TIME" << endl ;
              return 0 ;
          }
      }
      cout << "LUCKY" << endl ;
      
      
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