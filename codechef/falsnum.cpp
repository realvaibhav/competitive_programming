   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      string a ;
      cin >> a ;
      int n=a.size() ;
      string w=a.substr(1)  ;
      
      if(a[0]=='1') // if first digit is 1
      {
          cout <<  a[0] << "0" <<  w << endl ;
      }
      else 
      {
          cout << "1" <<  a  <<  endl ;
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