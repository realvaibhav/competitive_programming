#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   int n ;
   cin >> n ;
   string s ;
   cin >> s ;
   int good=0 , bad=0 , res=0 ;
   for (int i = 0; i < n; i++)
   {
       if (s[i]=='1')
       {
           good++ ;
       }
       else
       {
           bad++ ;
       }
       if ((good>=((i+1)/2)) && (i+1)%2==0)
       {
           cout << "YES" << endl ;
           return 0 ;
       }
       else if ((good>((i+1)/2)) && (i+1)%2!=0)
       {
           cout << "YES" << endl ;
           return 0 ;
       }

       
   }
   
   cout << "NO" << endl ;
 
 
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