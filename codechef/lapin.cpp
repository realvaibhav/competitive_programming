#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   string s , s1 , s2 ;
   cin >> s ;
   int n=s.size()  ;
   int d=n/2 ;

   if (n%2==0)
   {
        s1=s.substr(0,d) ; 
        s2=s.substr(d,d) ;
   }
   else
   {
       s1=s.substr(0,d) ;
       s2=s.substr(d+1,d) ;
   }
   
   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());
   
   if (s1==s2)
   {
       cout << "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
   }
   
//    cout << "s1 is " << s1 << endl ;
//    cout << "s2 is " << s2 << endl ;
   
   
   return 0;
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

    return 0;
}