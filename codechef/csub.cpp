      #include<bits/stdc++.h>
      using namespace std ;
      typedef long long int ll ;
      #define MAX 1000000000
      #define endl "\n" 


      int solution()
      { 
         int n ;
         cin >> n ;
         string s ;
         cin >> s ;
         int one=0 ; // count of 1 in string
         for(int i=0 ; i<n ; i++)
         {
            if(s[i]=='1')
            {
                one++ ;
            }
         }
         bool flag=false  ;
         int x=0 ;
         int count=0 ; // starting and ending with 1 
         for(int i=0 ; i<n ; i++)
         {
            if(s[i]=='1' && x==0)
            {
                x=1 ;
            }
            else if(s[i]=='1' && x==1)
            {
                count++ ;
                x=1 ;
            }
         }
         cout << count+one << endl ;
         
         

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