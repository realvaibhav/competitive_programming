#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
     
     string s1 , s2 ;
     cin >> s1 >> s2 ;
     int count=0 , res1=0 , res2=0 , ans=0 , check1=0 , check2=0 , diff=0 ;
     for (int i = 0; i < s1.size() ; i++)
     {
          if ((s1[i]==s2[i])&&s1[i]!='?')
          {
              count++ ;
          }
          if ((s1[i]==s2[i])&&s1[i]=='?')
          {
              ans++  ;
          }
          if (s1[i]=='?')
          {
              check1++ ;
          }
          if (s2[i]=='?')
          {
              check2++ ;
          }
          if ((s1[i]=='?'&&s2[i]!='?')||(s2[i]=='?'&&s1[i]!='?'))
          {
              diff++ ;
          }
          
     }

     res1=s1.size()-count-ans-diff ;
     res2=s1.size()-count ;

     cout << res1 << " " << res2 << endl ;
     
     
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