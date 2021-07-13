   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n , count=0 , res=0 ;
      cin >> n ;
      string s ;
      char k , c ;
      for(int i=0 ; i<n ; i++)
      {
          
          cin >> s ;
          k=s[0] ;
          if(k>='a' && k<='m')
          {
              for(int j=0 ; j < s.size() ; j++) 
              {
                  c=s[j] ;
                  if( c>='a' && c<='m' )
                  {
                      count++ ;
                  }
              }
              if(count==s.size())
              {
                  res++ ;
              }
              count=0 ;
          }
          else if(k>='N' && k<='Z')
          {
              for(int j=0 ; j < s.size() ; j++) 
              {
                  c=s[j] ;
                  if( c>='N' && c<='Z' )
                  {
                      count++ ;
                  }
              }
              if(count==s.size())
              {
                  res++ ;
              }
              count=0 ;
          }

      }



      if(res==n)
      {
          cout << "YES" << endl ;
      }
      else
      {
          cout << "NO" << endl ;
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