#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
  int gwater , fwater , thouse , awater , twater , ans=0 ;
  cin >> thouse >> fwater >> gwater >> awater ;

  twater=fwater + floor(gwater/2) ;
  ans=thouse*twater ;
  if (ans>awater)
  {
      cout << "NO" << endl;
  }
  else
  {
      cout << "YES" << endl ;
  }
  
  
  
   
   
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