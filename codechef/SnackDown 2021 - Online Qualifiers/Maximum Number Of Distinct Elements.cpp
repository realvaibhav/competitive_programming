#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int n; 
   cin>>n;

   vector<pair<int, int>> arr;
   int one=0 ;
   int array[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> array[i]  ;
      if(array[i]==1)
      {
         one++ ;
      }
   }
   for (int i = 0; i < n; i++)
   {
      arr.push_back({array[i], i});
   }
   
   sort(arr.begin(), arr.end());
   vector<int> vec(n);
   int ans=0 ;
   for (int i = 0; i < n; i++)
   {
      int temp = arr[i].second ;
      if(ans<arr[i].first)
      {
         vec[temp]=ans ;
         ans++ ;
      }
   }
   
   for(auto x:vec)
   {
      cout << x << " " ;
   } 
   cout << endl ;

   

   
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