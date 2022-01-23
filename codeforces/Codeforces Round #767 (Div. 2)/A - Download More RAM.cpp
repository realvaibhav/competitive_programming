#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   int n,k  ;
   cin >> n >> k ;
   int arr[n] ;
   for (int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   int brr[n] ;
   for (int i=0; i<n; i++)
   {
      cin >> brr[i]  ;
   }
   pair<int,int> p[n] ;
   for (int i=0; i<n; i++)
   {
       p[i]=make_pair(arr[i],brr[i]) ;
   }
   sort(p,p+n) ;
   int sum=k ;
   for (int i=0; i<n; i++)
   {
       if(sum>=p[i].first)
       {
           sum+=p[i].second ;
       }
   }

   cout << sum << endl ;

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