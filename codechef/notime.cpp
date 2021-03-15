#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int main()
{
   
   int n , h , x , d=0 ;
   cin >> n >> h >> x ;
   int arr[n] ;
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i] ;
   }
   d=h-x ;
   for (int i = 0; i < n; i++)
   {
       if (arr[i]==d)
       {
          cout << "YES" << endl ;
          return 0 ;
       }
       
   }
   cout << "NO" << endl ;

   return 0;
}