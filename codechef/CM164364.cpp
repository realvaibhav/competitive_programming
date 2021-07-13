#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   int n , x , res=0 , ans=0 ;
   cin >> n >> x;
   int arr[n] ;
   set<int> s1 ;
   set<int> s2 ;
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i] ;
       s1.insert(arr[i]) ;
   }

   if(s1.size()==n)
   {
       cout << n - x << endl ;
   }
   else
   {
       res=n-s1.size() ;

       if (res>=x)
       {
           cout << s1.size() << endl ;
       }
       else
       {
           ans= s1.size() - (x-res) ;
           cout << ans << endl ;
       }
       
       
       
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