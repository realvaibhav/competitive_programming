#include<bits/stdc++.h>
 using namespace std; 
 typedef long long int ll ;

 int calling()
 {
     int total , jump , citi , my , d=0 ; 
     cin >> total >> jump >> citi >> my ;
     for (int i = 0; i < total; i++)
     {
         d=(jump+citi)%total ;
         if(d==my)
         {
             cout << "YES" << "\n" ;
             return 0;
         }
         else
         {
             citi=d ;
         }
           
     }
         cout << "NO" << "\n" ;
  
     return 0; 

 }



 int main()
 {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
    cout.tie(NULL);

    ll t  ;
    cin >> t ;   // total test case
    for (ll i = 0; i < t; i++)
    {
        calling(); 
    }

      return 0 ; 

 }