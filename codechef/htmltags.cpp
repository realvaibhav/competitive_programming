   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      string s ; 
      cin >> s ;
      int n=s.size()  ;
      int count=0 ;
      for(int i=2 ; i<n-1 ; i++)
      {
          if(!((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)))
          {
              count++ ;
          }
      }

      if(n>=4 && s[0]=='<' && s[1]=='/' && s[n-1]=='>' && count==0)
      {
          cout << "Success" << endl ;
      }
      else
      {
          cout << "Error" << endl ;
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