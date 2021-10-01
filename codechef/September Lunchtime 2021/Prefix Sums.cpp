#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

int solution()
{ 
   int n ;
   cin >> n ;
   
   int temp=n*(n+1) ;
   temp=temp/2 ;

   if(n==2 || n%2!=0 || temp%2!=0)
   {
       cout << "NO" << endl ;
   }
   else
   {
       vector<int> vec1 , vec2 ;
       for(int i=1 ; i<=n ; i++)
       {
           if(i%4==1 || i%4==0)
           {
               vec1.push_back(i) ;
           }
           else
           {
               vec2.push_back(i) ;
           }
       }
       cout << "YES" << endl ;
       for(int i=0 ; i<n/2 ; i++)
       {
           cout << vec1[i] << " " ;
       }
       cout << endl ;
       for(int i=n/2 - 1 ; i>=0 ; i--)
       {
           cout << vec2[i] << " " ;
       }
       cout << endl ;



   }
   

   
   return 0 ;
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