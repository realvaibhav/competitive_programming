   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      ll n ;
      cin >> n ;
      ll arr[n] , odd=0 , even=0 ;
      for(ll i=0 ; i<n ; i++)
      {

            cin >> arr[i]  ;

            if(arr[i]%2==0)
            {
                even++  ;
            }
            else
            {
                odd++   ;
            }

      }
      vector<int> ev , od  ;
      for(ll i=0 ; i<n ; i++)
      {
          if(arr[i]%2==0)
          {
               ev.push_back(arr[i])   ;
          }
          else
          {
               od.push_back(arr[i])   ;
          }
      }
      
      for(ll i=0 ; i < even ; i++)
      {
           cout << ev[i] << " "   ;
      }
      for(ll i=0 ; i < odd ; i++)
      {
          cout << od[i] << " " ;
      } 
      cout << endl  ; 
      
      
      
      return 0  ;
   }


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      ll t ;
      cin >> t ;
      for (ll i = 0; i < t; i++)
      {
         solution() ;
      }

      return 0  ;
   }