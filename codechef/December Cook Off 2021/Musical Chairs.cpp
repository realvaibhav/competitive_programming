#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

//    cout << "YES" << endl  ;
//    cout << "NO" << endl  ;
//    cout << "-1" << endl ;

/*

   for(int i=0 ; i<n ; i++)
   {
      cout << arr[i] << " "   ;
   }    
   
   cout << endl   ;

*/


void solution()
{ 
   int n  ;
   cin >> n  ;
   
   int count=0 ;
   n-- ;

   for(int i=1 ; i<=sqrt(n) ; i++)
   {
      if(n%i==0)
      {
         count++ ;
         if(i!=(n/i))
         {
            count++ ;
         }
      }
   }
   cout << count << endl ;

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