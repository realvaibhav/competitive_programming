#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   int n , m ;
   cin >> n >> m ;
   int full , part  ;
   cin >> full >> part ;
   string s ;
   vector<int>vec ;
   for (int i = 0; i < n; i++)
   {
       int f=0 , p=0 , u=0 ;
       cin >> s ;
       for (int i = 0; i < s.size() ; i++)
       {
           if (s[i]=='U')
           {
               u++ ;
           }
           else if(s[i]=='P')
           {
               p++ ;
           }
           else
           {
               f++ ;
           }
       }
       
       if ((f>=full) || (f>=full-1 && p>=part))
       {
           vec.push_back(1) ;
       }
       else
       {
           vec.push_back(0) ;
       }
   }
   
  for (int i = 0; i < vec.size(); i++)
  {
      cout << vec[i] ;
  }
  
   cout << endl ;
   
   
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