   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      string s ;
      cin >> s ;
      int countE=0 , counte=0 , countC=0 , counto=0 , countD=0  ;
      for(int i=0 ; i<s.size() ; i++)
      {
          if(s[i]=='C')
          {
              countC++  ;
          }
          if (s[i]=='D')
          {
              countD++  ;
          }
          if(s[i]=='o')
          {
              counto++  ;
          }
      }
      for(int i=1 ; i<s.size()-1 ; i++)
      {
          if(s[i]=='E')
          {
              countE++  ;
          }
          if (s[i]=='e')
          {
              counte++  ;
          }
      }

      
      if (countE>=1 && counte>=1)
      {

          if((countC>=1 && countD>=1) && (counto>=1))
          {
              cout << "SELECTED" << endl  ;
          }
          else
          {
              cout << "REJECTED" << endl ;
          }  

      }
      else
      {
          cout << "REJECTED" << endl ;
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