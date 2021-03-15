#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
  int count1=0 , count2=0 ;
  string s ;
  cin >> s ;
  int d= s.length() ;
  for (int i = 0 ; i < d ; i++)
  {
      if (s[i]=='1')
      {
          count1++ ;
      }
      
  }
  for (int i = 0 ; i < d-1 ; i++)
  {
      if (s[i]=='1' && s[i]==s[i+1])
      {
           count2++ ;
      }
      
  }
      
  cout << count1-count2 << endl ;

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