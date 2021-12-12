#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int n ;
   cin >> n ;
   int N=2*n ;
   int arr[N] ;
   unordered_map<int, int> mp;
   unordered_set<int> s ;
   for(int i=0 ; i<N ; i++)
   {
      cin >> arr[i]  ;
      mp[arr[i]]++;
      s.insert(arr[i]) ;
   } 



   if(n==1)
   {
      if(arr[0]==arr[1])
      {
         cout << arr[0] << endl ;
      }
      else
      {
         cout << "-1" << endl ;
      }
      
      return  ;
   }

   if(s.size()!=n)
   {
      cout << "-1" << endl ;
   }
   else
   {
      vector<int> vec ;
      for(auto x:s)
      {
         vec.push_back(x)  ;
      }
      
      sort(vec.begin(),vec.end()) ;
      int temp=0 ;
      if(n%2==0)
      {
         temp=vec[n/2 -1] ;
      }
      else
      {
         temp=vec[n/2] ;
      }
   
     int count = mp[temp];
     int cnt2 = mp[vec[n-1]]; 
     bool ans = true;

   for(auto &e:mp)
   {
      if(e.first != temp && e.first != vec[n-1] && e.second != 2)
      {
         ans = false;
         break;
      }
   }
   
   if(count==3 && cnt2==1 && ans==true)
   {
      for(auto x:vec)
      {
         cout << x << " " ;
      }
      cout << endl ;
   }
   else
   {
      cout << "-1" << endl ;
   }
   
   }
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