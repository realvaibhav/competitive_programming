#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

void solution()
{ 
   int n ;
   cin >> n ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }
   int temp=arr[0] ;
   deque<int> dq ;
   dq.push_front(temp) ;
   for(int i=1 ; i<n ; i++)
   {
      if(arr[i]<temp)
      {
          dq.push_front(arr[i]) ;
          temp=arr[i] ;
      }
      else if(arr[i]>temp)
      {
          dq.push_back(arr[i]) ;
      }
   }
   for(auto it=dq.begin() ; it!=dq.end() ; it++)
   {
       cout << *it << " " ;
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