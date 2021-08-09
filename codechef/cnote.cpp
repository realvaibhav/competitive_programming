      #include<bits/stdc++.h>
      using namespace std ;
      typedef long long int ll ;
      #define MAX 1000000000
      #define endl "\n" 


      int solution()
      { 
        int x , y , k , n ;
        cin >> x >> y >> k >> n  ;
        int money_left=k  ;
        int pages_required=x-y  ;
        int page[n] , cost[n] ;
        for (int i = 0; i < n; i++)
        {
            cin >> page[i] >> cost[i] ;
        }
        for (int i = 0; i < n; i++)
        {
            if(page[i]>=pages_required && cost[i]<=money_left)
            {
                cout <<  "LuckyChef" << endl ;
                return 0 ;
            }
        }
            cout << "UnluckyChef" << endl ;
        

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