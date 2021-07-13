#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
  string s ;
  cin >> s ;
  int ans=0 , flag=1 , res=0 ;

  for (int i = 0; i < s.size(); i++)
  {
      if (s[i]=='p'&&s[i+1]=='a'&&s[i+2]=='r'&&s[i+3]=='t'&&s[i+4]=='y')
      {
          s[i+2]='w' ;
          s[i+3]='r' ;
          s[i+4]='i' ;
      }
      
  }

  cout << s << endl ;
  
  

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