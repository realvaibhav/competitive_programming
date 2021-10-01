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
   int n , k ;
   cin >> n >> k ;
   
   if(k==n-1)
   {
       cout << "-1" <<  endl  ;
   }
   else
   {
       for(int i=1 ; i<=k ; i++)
       {
           cout << i << " " ;
       }
       int temp=n-k ;
       if(temp%2==0)
       {
           for(int i=k+1 ; i<=n-1 ; i=i+2)
           {
               cout << i+1 << " " << i << " " ;
           }
       }
       else
       {
           if(temp>0)
           {
               cout << n << " " ;
           }
           for(int i=k+1 ; i<=n-1 ; i++)
           {
               cout << i << " " ;
           }

       }
       cout << endl ;
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