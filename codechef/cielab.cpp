#include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 

   int main()
   {
       ll a , b ;
       cin >> a >> b ;
       ll diff=a-b ;
       if(diff%10==9)
       {
           cout << diff-1 << endl ;
       }
       else
       {
           cout << diff+1 << endl ;
       }


       return 0 ;
   }